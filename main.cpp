#include <iostream>
#include <string>

#define OPTIONS 3
#define ROCK 0
#define PAPER 1
#define SCISSOR 2
#define PLAYER -1
#define COMPUTER -2
#define REDO -3

int computerOption () {
    return std::rand() % OPTIONS;
}

std::string roundWinner(int winner) {
    if (winner == PLAYER) {
        return "You";
    }
    else if (winner == COMPUTER) {
        return "Computer";
    }
    else {
        return "REDO";
    }
}

int declareWinner (int playerOption, int computerOption) {
    if (playerOption == ROCK) {
        switch(computerOption) {
        case PAPER:
            return COMPUTER;
        case SCISSOR:
            return PLAYER;
        default:
            return REDO;
        }
    }
    if (playerOption == PAPER) {
        switch(computerOption) {
        case ROCK:
            return COMPUTER;
        case SCISSOR:
            return PLAYER;
        default:
            return REDO;
        }
    }
    if (playerOption == SCISSOR) {
        switch(computerOption) {
        case ROCK:
            return COMPUTER;
        case PAPER:
            return PLAYER;
        default:
            return REDO;
        }
    }
    return REDO;
}

int main() {
    std::cout << "-----------------------" << std::endl;
    std::cout << "|Rock, Paper, Scissors|" << std::endl;
    std::cout << "-----------------------" << std::endl;
    for (int i = 0; i < 10; i++) {
        std::cout << roundWinner(declareWinner(ROCK, computerOption())) << std::endl;
    }
    return 0;
}
