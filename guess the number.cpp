#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    int input;
    int max;

    std::cin >> max;
    srand(time(0));
    int lucky_number = rand() % max;
    lucky_number + 1;
    std::cin >> input;

    while (input != lucky_number) {
        std::cout << "Try again.";
        std::cin >> input;
    }

    std::cout << "Good job, you guessed the number.";
    return 0;
}