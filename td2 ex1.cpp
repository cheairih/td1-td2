#include <iostream>

void afficherAppelNumero() {
    // Variable statique pour conserver le nombre total d'appels
    static int nombreAppels = 0;
    
    // Incrémente le nombre d'appels à chaque appel
    nombreAppels++;
    
    // Affiche le nombre total d'appels
    std::cout << "appel numéro " << nombreAppels << std::endl;
}

int main() {
   
    afficherAppelNumero();


    return 0;
}
