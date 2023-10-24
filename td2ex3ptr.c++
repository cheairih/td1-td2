#include <iostream>
using namespace std;
int main() {
    int tableau[10];
    int* ptr = tableau;
    
    // Lire 10 nombres entiers dans le tableau en utilisant un pointeur
    for (int i = 0; i < 10; i++) {
        cout << "Entrez un nombre entier : ";
        cin >> *(ptr + i);
    }

    // Rechercher le plus grand et le plus petit nombre
    int* ptrDePlusGrand = ptr;
    int* ptrDePlusPetit = ptr;

    for (int i = 1; i < 10; i++) {
        if (*(ptr + i) > *ptrDePlusGrand) {
            ptrDePlusGrand = ptr + i;
        }

        if (*(ptr + i) < *ptrDePlusPetit) {
            ptrDePlusPetit = ptr + i;
        }
    }

    cout << "Le plus grand nombre est : " << *ptrDePlusGrand << endl;
   cout << "Le plus petit nombre est : " << *ptrDePlusPetit << endl;

    return 0;
}
