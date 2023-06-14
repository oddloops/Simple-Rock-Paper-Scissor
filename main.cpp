#include "Game.h"

int main() {
    std::cout << "-----------------------" << std::endl;
    std::cout << "|Rock, Paper, Scissors|" << std::endl;
    std::cout << "-----------------------" << std::endl;
    int playerChoice, computerChoice, rWinner;
    int playerPoint = 0, computerPoint = 0;
    int rounds;
    std::cout << "How many rounds?" << std::endl;
    std::cin >> rounds;
    while (rounds > 0) {
        computerChoice = computerOption();
        std::cout << "Choose (0) ROCK, (1) PAPER, (2) SCISSOR: ";
        std::cin >> playerChoice;
        std::cout << rpsOptions(playerChoice) << " VS " << rpsOptions(computerChoice) << std::endl;
        rWinner = declareWinner(playerChoice, computerChoice);
        std::cout << "Winner: " << roundWinner(rWinner) << "\n" << std::endl;
        if (rWinner != REDO) {
            if (rWinner == PLAYER) {
                playerPoint++;
            }
            if (rWinner == COMPUTER) {
                computerPoint++;
            }
            rounds--;
        }
    }
    totalWinner(playerPoint, computerPoint);
    return 0;
}
