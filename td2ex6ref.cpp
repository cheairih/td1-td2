#include <iostream>
using namespace std;
// Fonction pour incrémenter une variable par référence
void incrementer(int& variable) {
    variable++;
}

// Fonction pour échanger les contenus de deux variables par référence
void permuter(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int a = 5;
    int b = 10;

    // Test de la fonction incrementer
    incrementer(a); // Passage par référence de 'a' à la fonction
    std::cout << "Après incrementer, a = " << a << std::endl;

    // Test de la fonction permuter
    permuter(a, b); // Passage par référence de 'a' et 'b' à la fonction
    cout << "Après permuter, a = " << a << " et b = " << b << endl;

    return 0;
}
