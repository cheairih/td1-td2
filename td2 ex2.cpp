#include <iostream>
using namespace std;
// Fonction pour vérifier si un nombre est pair
void verifiermulti2(int nombre) {
    if (nombre % 2 == 0) {
        cout << nombre << " est pair." << endl;
    } else {
        cout << nombre << " n'est pas pair." << endl;
    }
}

// Fonction pour vérifier si un nombre est multiple de 3
void verifierMulti3(int nombre) {
    if (nombre % 3 == 0) {
        cout << nombre << " est multiple de 3." << endl;
    } else {
        cout << nombre << " n'est pas multiple de 3." << endl;
    }
}

int main() {
    int nombre;

    // Lire un nombre entier depuis l'utilisateur
    cout << "Entrez un nombre entier : ";
    cin >> nombre;

    // Utiliser les fonctions pour vérifier la parité et la divisibilité par 3
    verifiermulti2(nombre);
    verifierMulti3(nombre);

    // Vérifier si le nombre est multiple de 6
    if (nombre % 2 == 0 && nombre % 3 == 0) {
        cout << nombre << " est multiple de 6." << endl;
    } else {
        cout << nombre << " n'est pas multiple de 6." << endl;
    }

    return 0;
}
