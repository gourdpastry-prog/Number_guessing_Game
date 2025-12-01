#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    int input;
    int max;

    std::cout << "Enter the max number.\n";
    std::cin >> max;
    srand(time(0));
    int lucky_number = rand() % max;
    lucky_number + 1;
    std::cout << "Good number, start guessing.\n\n";
    std::cin >> input;

    while (input != lucky_number) {
        std::cout << "Try again.\n";
        std::cin >> input;
    }

    std::cout << "Good job, you guessed the number.";
    return 0;

}

