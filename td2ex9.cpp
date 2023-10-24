#include <iostream>
#include <string>
using namespace std;

class Zebra {
public:
    string Nom;
    int Age;
    string Origine;

    void set_values(const string& nom, int age, const string& origine) {
        Nom = nom;
        Age = age;
        Origine = origine;
    }

    void print() {
        cout << "Le nom est : " << Nom << ", l'âge est : " << Age << ", et le lieu d'origine est : " << Origine << endl;
    }
};

class Dolphin {
public:
    string Nom;
    int Age;
    string Origine;

    void set_values(const string& nom, int age, const string& origine) {
        Nom = nom;
        Age = age;
        Origine = origine;
    }

    void print() {
        cout << "Le nom est : " << Nom << ", l'âge est : " << Age << ", et le lieu d'origine est : " << Origine << endl;
    }
};

int main() {
    Zebra zebra;
    Dolphin dolphin;

    zebra.set_values("Zebra", 10, "Afrique");
    dolphin.set_values("Dolphin", 7, "Océan Antarctique");

    zebra.print();
    dolphin.print();

    return 0;
}
