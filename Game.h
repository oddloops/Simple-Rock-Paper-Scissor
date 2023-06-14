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

std::string rpsOptions (int option) {
    if (option == ROCK) {
        return "ROCK";
    }
    else if (option == PAPER) {
        return "PAPER";
    }
    else if (option == SCISSOR) {
        return "SCISSOR";
    }
    else {
        return "INVALID OPTION";
    }
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

void totalWinner (int playerPoints) {
    if (playerPoints > 0) {
        std::cout << "You won!" << std::endl;
    }
    else if (playerPoints < 0) {
        std::cout << "Computer won :(" << std::endl;
    }
    else {
        std::cout << "Tie!!!!" << std::endl;
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

