#include <iostream>
using namespace std;
int main() {
    int a = 42; // Déclaration de l'entier a
    int& ref_a = a; // Déclaration d'une référence ref_a à a
    int* p_a = &a; // Déclaration d'un pointeur p_a pointant vers a

    cout << "Variable a : " << a << endl;
   cout << "Adresse de a : " << &a << endl;

   cout << "Référence ref_a : " << ref_a << endl;
    cout << "Adresse de ref_a : " << &ref_a << endl;

    cout << "Pointeur p_a : " << *p_a << endl; // Affichage de la valeur pointée
    cout << "Adresse de p_a : " << p_a << endl;

    return 0;
}
