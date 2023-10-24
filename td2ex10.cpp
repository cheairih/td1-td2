#include <iostream>
#include <string>
using namespace std;

class Personne {
private:
    string Nom;
    string Prenom;
    string DateNaissance;

public:
    Personne(const string& nom, const string& prenom, const string& dateNaissance)
        : Nom(nom), Prenom(prenom), DateNaissance(dateNaissance) {}

    void Afficher() {
        cout << "Nom : " << Nom << endl;
        cout << "Prénom : " << Prenom << endl;
        cout << "Date de naissance : " << DateNaissance << endl;
    }
};

class Employe {
private:
    string Nom;
    string Prenom;
    string DateNaissance;
    double Salaire;

public:
    Employe(const string& nom, const string& prenom, const string& dateNaissance, double salaire)
        : Nom(nom), Prenom(prenom), DateNaissance(dateNaissance), Salaire(salaire) {}

    void Afficher() {
        cout << "Nom : " << Nom << endl;
        cout << "Prénom : " << Prenom << endl;
        cout << "Date de naissance : " << DateNaissance << endl;
        cout << "Salaire : " << Salaire << " euros" << endl;
    }
};

class Chef {
private:
    string Nom;
    string Prenom;
    string DateNaissance;
    double Salaire;
    string Service;

public:
    Chef(const string& nom, const string& prenom, const string& dateNaissance, double salaire, const string& service)
        : Nom(nom), Prenom(prenom), DateNaissance(dateNaissance), Salaire(salaire), Service(service) {}

    void Afficher() {
        cout << "Nom : " << Nom << endl;
        cout << "Prénom : " << Prenom << endl;
        cout << "Date de naissance : " << DateNaissance << endl;
        cout << "Salaire : " << Salaire << " euros" << endl;
        cout << "Service : " << Service << endl;
    }
};

class Directeur {
private:
    string Nom;
    string Prenom;
    string DateNaissance;
    double Salaire;
    string Service;
    string Societe;

public:
    Directeur(const string& nom, const string& prenom, const string& dateNaissance, double salaire, const string& service, const string& societe)
        : Nom(nom), Prenom(prenom), DateNaissance(dateNaissance), Salaire(salaire), Service(service), Societe(societe) {}

    void Afficher() {
        cout << "Nom : " << Nom << endl;
        cout << "Prénom : " << Prenom << endl;
        cout << "Date de naissance : " << DateNaissance << endl;
        cout << "Salaire : " << Salaire << " euros" << endl;
        cout << "Service : " << Service << endl;
        cout << "Société : " << Societe << endl;
    }
};

int main() {
    Personne personne("Doe", "John", "01/01/1990");
    Employe employe("Smith", "Alice", "15/05/1985", 50000);
    Chef chef("Johnson", "Bob", "10/10/1980", 75000, "Ressources Humaines");
    Directeur directeur("Brown", "Charlie", "05/03/1975", 100000, "Direction Générale", "ABC Inc.");

    personne.Afficher();
    cout << endl;
    employe.Afficher();
    cout << endl;
    chef.Afficher();
    cout << endl;
    directeur.Afficher();

    return 0;
}
