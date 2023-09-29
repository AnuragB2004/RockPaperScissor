#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main() {
    int playerChoice;
    int computerChoice;
    int playerScore = 0;
    int computerScore = 0;
    int rounds = 0;

    srand(time(0));

    cout << "Let's play Rock, Paper, Scissors!\n";

    while (true) {
        cout << "Round " << rounds + 1 << "\n";
        cout << "1. Rock\n2. Paper\n3. Scissors\n4. Quit\n";
        cout << "Enter your choice (1/2/3/4): ";
        cin >> playerChoice;

        if (playerChoice == 4) {
            break;
        }

        computerChoice = rand() % 3 + 1;

        if (playerChoice == computerChoice) {
            cout << "It's a tie!\n";
        } else if ((playerChoice == 1 && computerChoice == 3) ||
                   (playerChoice == 2 && computerChoice == 1) ||
                   (playerChoice == 3 && computerChoice == 2)) {
            cout << "You win!\n";
            playerScore++;
        } else {
            cout << "Computer wins!\n";
            computerScore++;
        }

        rounds++;
        cout << "Player: " << playerScore << " Computer: " << computerScore << "\n\n";
    }

    cout << "Game Over\n";
    if (playerScore > computerScore) {
        cout << "You won the game!\n";
    } else if (computerScore > playerScore) {
        cout << "Computer won the game!\n";
    } else {
        cout << "It's a tie game!\n";
    }

    return 0;
}
