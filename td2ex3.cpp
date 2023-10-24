#include <iostream>
using namespace std;
int main() {
    int tableau[10];
    
    // Lire 10 nombres entiers dans le tableau
    for (int i = 0; i < 10; i++) {
        cout << "Entrez un nombre entier : ";
        cin >> tableau[i];
    }

    // Rechercher le plus grand et le plus petit nombre
    int plusGrand = tableau[0];
    int plusPetit = tableau[0];

    for (int i = 1; i < 10; i++) {
        if (tableau[i] > plusGrand) {
            plusGrand = tableau[i];
        }

        if (tableau[i] < plusPetit) {
            plusPetit = tableau[i];
        }
    }

    cout << "Le plus grand nombre est : " << plusGrand << endl;
    cout << "Le plus petit nombre est : " << plusPetit << endl;

    return 0;
}
