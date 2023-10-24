#include <iostream>

int main() {
    int n;
    double sum = 0.0;

    std::cout << "Entrez la valeur de n : ";
    std::cin >> n;

    if (n <= 0) {
        std::cout << "La valeur de n doit être un entier positif." << std::endl;
    } else {
        for (int i = 1; i <= n; i++) {
            sum += 1.0 / i;
        }

        std::cout << "La somme des " << n << " premiers termes de la série harmonique est : " << sum << std::endl;
    }

    return 0;
}
