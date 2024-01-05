#include <iostream>
#include <cstdlib>
#include <ctime>

// Function to generate a random number
int generateRandomNumber(int lower, int upper) {
    return (rand() % (upper - lower + 1)) + lower;
}

// Function to check if a number is prime
bool isPrime(int number) {
    if (number <= 1) {
        return false;
    }

    for (int i = 2; i <= number / 2; ++i) {
        if (number % i == 0) {
            return false;
        }
    }

    return true;
}

int main() {
    // Seed for random number generation
    srand(static_cast<unsigned int>(time(nullptr)));

    // Prompt user for input
    std::cout << "Enter a positive integer: ";
    int userInput;
    std::cin >> userInput;

    // Bug: Incorrect condition for the loop
    for (int i = 1; i <= userInput; ++i) {
        // Bug: Incorrect function call
        int randomNum = generateRandomNumber(1, 100);

        // Bug: Incorrect output format
        std::cout << "Random number #" << i << ": " << randomNum << std::endl;

        // Bug: Incorrect function call
        if (isPrime(randomNum)) {
            std::cout << randomNum << " is a prime number." << std::endl;
        } else {
            std::cout << randomNum << " is not a prime number." << std::endl;
        }
    }

    return 0;
}
