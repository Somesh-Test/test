// Make a calculator logic

#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include <algorithm>

/**
 * @class Calculator
 * @brief A simple calculator class to perform basic arithmetic operations.
 */

/**
 * @brief Adds two numbers.
 * 
 * @param a The first number.
 * @param b The second number.
 * @return The sum of a and b.
 */

/**
 * @brief Subtracts the second number from the first number.
 * 
 * @param a The first number.
 * @param b The second number.
 * @return The result of a - b.
 */

/**
 * @brief Multiplies two numbers.
 * 
 * @param a The first number.
 * @param b The second number.
 * @return The product of a and b.
 */

/**
 * @brief Divides the first number by the second number.
 * 
 * @param a The first number.
 * @param b The second number.
 * @return The result of a / b.
 * @throws std::invalid_argument if b is zero.
 */
class Calculator {
public:
    double add(double a, double b) {
        return a + b;
    }

    double subtract(double a, double b) {
        return a - b;
    }

    double multiply(double a, double b) {
        return a * b;
    }

    double divide(double a, double b) {
        if (b == 0) {
            throw std::invalid_argument("Error: Division by zero!");
        }
        return a / b;
    }
};

int main() {
    Calculator calc;
    double a = 10.0, b = 5.0;

    std::cout << "Add: " << calc.add(a, b) << std::endl;
    std::cout << "Subtract: " << calc.subtract(a, b) << std::endl;
    std::cout << "Multiply: " << calc.multiply(a, b) << std::endl;
    std::cout << "Divide: " << calc.divide(a, b) << std::endl;

    return 0;
}
