#include <iostream>
using namespace std;
int main() {
    int taille;
    
    // Demander à l'utilisateur la taille du tableau
    cout << "Entrez la taille du tableau : ";
    cin >> taille;
    
    // Allouer dynamiquement un tableau d'entiers de la taille spécifiée
    int* premierTableau = new int[taille];
    
    // Lire les nombres entiers depuis l'utilisateur et les stocker dans le premier tableau
  cout << "Entrez " << taille << " nombres entiers : ";
    for (int i = 0; i < taille; i++) {
        cin >> premierTableau[i];
    }
    
    // Créer dynamiquement un nouveau tableau pour stocker les carrés des nombres du premier
    int* deuxiemeTableau = new int[taille];
    for (int i = 0; i < taille; i++) {
        deuxiemeTableau[i] = premierTableau[i] * premierTableau[i];
    }
    
    // Afficher les valeurs du deuxième tableau
    cout << "Les carrés des nombres du premier tableau sont : ";
    for (int i = 0; i < taille; i++) {
       cout << deuxiemeTableau[i] << " ";
    }
   cout << endl;
    
    // Supprimer le premier tableau
    delete[] premierTableau;
    
    // Supprimer le deuxième tableau
    delete[] deuxiemeTableau;
    
    return 0;
}
