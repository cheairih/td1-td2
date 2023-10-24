#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

// Fonction pour simuler le lancer d'un dé
int throwDice() {
    return rand() % 6 + 1; // Un dé à six faces
}

// Fonction pour le tour d'un joueur
int playerTurn(int playerNumber) {
    int choice;
    bool validChoice = false;

    while (!validChoice) {
        cout << "Joueur " << playerNumber << ", voulez-vous lancer 1 ou 2 dés ? ";
        cin >> choice;

        if (choice == 1 || choice == 2) {
            validChoice = true;
        } else {
            cout << "Choix invalide. Veuillez choisir 1 ou 2 dés." << endl;
        }
    }

    int dice1 = throwDice();
    int dice2 = throwDice();

    cout << "Joueur " << playerNumber << " a obtenu " << dice1 << " et " << dice2 << " au lancer de dés." << endl;

    if (choice == 1) {
        return dice1 + dice2;
    } else {
        if (dice1 == dice2) {
            cout << "Les dés sont identiques, le score du joueur " << playerNumber << " diminue de " << dice1 + dice2 << " points." << endl;
            return -(dice1 + dice2);
        } else {
            return dice1 + dice2;
        }
    }
}

int main() {
    srand(time(0)); // Initialise le générateur de nombres aléatoires avec une graine

    int score1 = 0;
    int score2 = 0;

    while (score1 < 30 && score2 < 30) {
        cout << "Score du joueur 1 : " << score1 << endl;
        cout << "Score du joueur 2 : " << score2 << endl;

        score1 += playerTurn(1);

        cout << "Score total du joueur 1 : " << score1 << endl;

        if (score1 >= 30) {
            break; // Le jeu se termine si le joueur 1 a gagné
        }

        score2 += playerTurn(2);

        cout << "Score total du joueur 2 : " << score2 << endl;
    }

    if (score1 >= 30 && score2 >= 30) {
        cout << "Match nul ! Les deux joueurs ont un score de 30 ou plus." << endl;
    } else if (score1 >= 30) {
        cout << "Le joueur 1 a gagné !" << endl;
    } else {
        cout << "Le joueur 2 a gagné !" << endl;
    }

    return 0;
}



