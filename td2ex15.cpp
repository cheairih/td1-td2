#include <iostream>
#include <cstdlib>
using namespace std;

class Fichier {
private:
    char* pointeur;
    int longueur;

public:
    Fichier(int taille);
    ~Fichier();
    void Creation(int taille);
    void Remplit();
    void Affiche();
};

Fichier::Fichier(int taille) {
    pointeur = nullptr;
    longueur = 0;
}

Fichier::~Fichier() {
    if (pointeur != nullptr) {
        delete[] pointeur;
    }
}

void Fichier::Creation(int taille) {
    pointeur = new char[taille];
    longueur = taille;
}

void Fichier::Remplit() {
    if (pointeur != nullptr) {
        for (int i = 0; i < longueur; i++) {
            pointeur[i] = 'X'; // Remplissage arbitraire
        }
    }
}

void Fichier::Affiche() {
    if (pointeur != nullptr) {
        for (int i = 0; i < longueur; i++) {
            std::cout << pointeur[i];
        }
        std::cout << std::endl;
    }
}

int main() {
    Fichier* monFichier = new Fichier(10); // Instancie un objet Fichier

    monFichier->Creation(10); // Alloue de l'espace mémoire
    monFichier->Remplit();    // Remplit l'espace mémoire
    monFichier->Affiche();    // Affiche le contenu

    delete monFichier; // Libère la mémoire et appelle le destructeur

    return 0;
}
