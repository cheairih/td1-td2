#include <iostream>

using namespace std;

struct Element {
    int valeur;
    Element* suivant;
};

class Liste {
private:
    Element* premier;

public:
    Liste() : premier(nullptr) {}

    // Méthode pour ajouter un élément au début de la liste
    void ajouterAuDebut(int valeur) {
        Element* nouvelElement = new Element;
        nouvelElement->valeur = valeur;
        nouvelElement->suivant = premier;
        premier = nouvelElement;
    }

    // Méthode pour supprimer un élément du début de la liste
    void supprimerDuDebut() {
        if (premier) {
            Element* temp = premier;
            premier = premier->suivant;
            delete temp;
        }
    }

    // Méthode pour afficher la liste en entier
    void afficherListe() {
        Element* courant = premier;
        while (courant) {
            cout << courant->valeur << " ";
            courant = courant->suivant;
        }
        cout << endl;
    }

    // Destructeur pour éviter les fuites mémoire
    ~Liste() {
        while (premier) {
            Element* temp = premier;
            premier = premier->suivant;
            delete temp;
        }
    }
};

int main() {
    Liste maListe;

    maListe.ajouterAuDebut(3);
    maListe.ajouterAuDebut(2);
    maListe.ajouterAuDebut(1);

    cout << "Liste initiale : ";
    maListe.afficherListe();

    maListe.supprimerDuDebut();
    cout << "Liste après suppression du premier élément : ";
    maListe.afficherListe();

    return 0;
}
