#include <iostream>

int main() {
    // Declare variables to store the two numbers
    double num1, num2;

    // Prompt the user to input the two numbers
    std::cout << "Enter the first number: ";
    std::cin >> num1;

    std::cout << "Enter the second number: ";
    std::cin >> num2;

    // Calculate the difference
    double difference = num1 - num2;

    // Display the result
    std::cout << "The difference between " << num1 << " and " << num2 << " is: " << difference << std::endl;

    return 0;
}

