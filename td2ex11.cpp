#include <iostream>
#include <cmath>
using namespace std;

class vecteur3d {
private:
    float x;
    float y;
    float z;

public:
    // Constructeur avec des valeurs par défaut (0)
    vecteur3d(float x = 0.0, float y = 0.0, float z = 0.0) : x(x), y(y), z(z) {}

    // Fonction d'affichage des composantes du vecteur
    void afficher() const {
        cout << "(" << x << ", " << y << ", " << z << ")" << endl;
    }

    // Fonction pour obtenir la somme de deux vecteurs
    vecteur3d somme(const vecteur3d& v) const {
        return vecteur3d(x + v.x, y + v.y, z + v.z);
    }

    // Fonction pour obtenir le produit scalaire de deux vecteurs
    float produitScalaire(const vecteur3d& v) const {
        return x * v.x + y * v.y + z * v.z;
    }

    // Fonction pour vérifier si deux vecteurs ont les mêmes composantes
    bool coincide(const vecteur3d& v) const {
        return x == v.x && y == v.y && z == v.z;
    }

    // Fonction pour obtenir la norme du vecteur
    float norme() const {
        return sqrt(x * x + y * y + z * z);
    }

    // Fonction pour obtenir le vecteur avec la plus grande norme entre deux vecteurs
    vecteur3d& normax(vecteur3d& v) {
        if (norme() >= v.norme()) {
            return *this;
        }
        return v;
    }
};

int main() {
    vecteur3d v1(1.0, 2.0, 3.0);
    vecteur3d v2(3.0, 2.0, 1.0);

    cout << "Vecteur 1 : ";
    v1.afficher();

    cout << "Vecteur 2 : ";
    v2.afficher();

    vecteur3d v3 = v1.somme(v2);
    cout << "Somme de v1 et v2 : ";
    v3.afficher();

    float produit = v1.produitScalaire(v2);
    cout << "Produit scalaire de v1 et v2 : " << produit << endl;

    bool isCoincide = v1.coincide(v2);
    cout << "Les vecteurs v1 et v2 coincident : " << (isCoincide ? "Oui" : "Non") << endl;

    float normeV1 = v1.norme();
    float normeV2 = v2.norme();
    cout << "Norme de v1 : " << normeV1 << endl;
    cout << "Norme de v2 : " << normeV2 << endl;

    vecteur3d& vecteurMax = v1.normax(v2);
    cout << "Le vecteur avec la plus grande norme est : ";
    vecteurMax.afficher();

    return 0;
}
