#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <ctime>
using namespace std;

int throwdice() {
    srand(static_cast<unsigned int>(time(nullptr)));
     int result = (rand() % 6) + 1;
     return result;
}
int playerTurn() {
    cout << "Voulez-vous lancer 1 ou 2 dés ? ";
    int choice;
    cin >> choice;
 
    // Validate the user's input
    while (choice != 1 && choice != 2) {
        cout << "Veuillez entrer une valeur cohérente (1 ou 2) : ";
        cin >> choice;
    }
    // Simulate the dice throw
    int diceResult = 0;
    if (choice == 1) {
        diceResult = throwDice();
    }
    else {
        diceResult = throwDice() + throwDice();
    }
    // Calculate the change in the player's score based on the dice result
    int scoreChange = 0;
    if (diceResult == 7 || diceResult == 11) {
        scoreChange = 5;
    }
    else if (diceResult == 2 || diceResult == 3 || diceResult == 12) {
        scoreChange = -5;
    }
    else {
        scoreChange = 0;
    }
 
    return scoreChange;
}
int main() {
    // Example usage of the playerTurn() function
    int playerScore = 0;
 
    // Simulate a player's turn and update the score
    int scoreChange = playerTurn();
    playerScore += scoreChange;
 
    cout << "Le score du joueur a été modifié de " << scoreChange << ".\n";
    cout << "Le score total du joueur est maintenant de " << playerScore << ".\n";
 
    return 0;
}
{   
    srand((unsigned int) time(NULL));
      int numofdices ;
    int dice;
    int player1;
    int player2; 
    int scorep1 = 0;
    int scorep2 = 0;

        cout <<"choose how many dices u wanna throw :";
        
        
    for(int i = 1; i <= dice; i++)
    {
        cout<< "dice"<< i << ":" << throwdice << endl;

        throwdice = (rand() % 6) +1;
        scorep1 = throwdice; 

    }
    
  return 0;
}