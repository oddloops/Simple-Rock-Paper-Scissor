#include <iostream>
#define OPTIONS 3

int computerOption () {
    return std::rand() % OPTIONS;
}

int main() {
    std::cout << "-----------------------" << std::endl;
    std::cout << "|Rock, Paper, Scissors|" << std::endl;
    std::cout << "-----------------------" << std::endl;
    return 0;
}
