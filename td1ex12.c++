#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    // Afficher l'en-tête de la table
   cout << "Table de multiplication de 1 à 10 : " << endl;

    // Boucle pour les multiplicateurs de 1 à 10
    for (int multiplicateur = 1; multiplicateur <= 10; multiplicateur++) {
        // Afficher le multiplicateur
        cout << "Table de " << multiplicateur << " : " << endl;

        // Boucle pour les nombres de 1 à 10
        for (int nombre = 1; nombre <= 10; nombre++) {
            // Calculer le produit
            int produit = nombre * multiplicateur;

            // Utiliser setw pour aligner les nombres
            cout << setw(4) << produit;
        }

        // Aller à la ligne pour la prochaine ligne de la table
      cout << endl;
    }

    return 0;
}
