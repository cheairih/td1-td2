#include <iostream>
using namespace std;
// Fonction pour incrémenter une variable en utilisant un pointeur
void incrementer(int* ptr) {
    (*ptr)++;
}

// Fonction pour échanger les contenus de deux variables en utilisant des pointeurs
void permuter(int* ptr1, int* ptr2) {
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}

int main() {
    int a = 5;
    int b = 10;

    // Test de la fonction incrementer
    incrementer(&a); // Passage de l'adresse de 'a' à la fonction
    cout << "Après incrementer, a = " << a << endl;

    // Test de la fonction permuter
    permuter(&a, &b); // Passage des adresses de 'a' et 'b' à la fonction
    cout << "Après permuter, a = " << a << " et b = " << b << endl;

    return 0;
}
