#include <iostream>
using namespace std;
int main() {
    const int taille = 10;
    int tableau[taille];

    // Saisie des 10 entiers
    cout << "Veuillez entrer 10 entiers : ";
    for (int i = 0; i < taille; i++) {
        cin >> tableau[i];
    }

    // Tri du tableau par ordre croissant en utilisant le tri à bulles
    bool aFaitUnEchange;
    do {
        aFaitUnEchange = false;
        for (int i = 0; i < taille - 1; i++) {
            if (tableau[i] > tableau[i + 1]) {
                // Échange des éléments s'ils ne sont pas dans le bon ordre
                int temp = tableau[i];
                tableau[i] = tableau[i + 1];
                tableau[i + 1] = temp;
                aFaitUnEchange = true;
            }
        }
    } while (aFaitUnEchange);

    // Affichage du tableau trié
   cout << "Tableau trié par ordre croissant : ";
    for (int i = 0; i < taille; i++) {
        cout << tableau[i] << " ";
    }
    cout << endl;

    return 0;
}
