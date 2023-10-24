#include <iostream>
using namespace std;
int main() {
    int hauteur;

    cout << "Combien de lignes ? ";
    cin >> hauteur;

    if (hauteur <= 0) {
        cout << "La hauteur doit être un entier positif." << endl;
    } else {
        for (int i = 1; i <= hauteur; i++) {
            // Affiche les espaces pour centrer l'étoile sur la ligne
            for (int j = 0; j < hauteur - i; j++) {
                cout << " ";
            }

            // Affiche les étoiles pour cette ligne
            for (int k = 0; k < 2 * i - 1; k++) {
                cout << "*";
            }

            cout << endl;
        }
    }

    return 0;
}
