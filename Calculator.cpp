#include <iostream>

class Calculator {
private:
    double number1;
    double number2;

public:
    // Constructor
    Calculator(double num1, double num2) {
        number1 = num1;
        number2 = num2;
    }

    // Mutators
    void setNumber1(double num) {
        number1 = num;
    }

    void setNumber2(double num) {
        number2 = num;
    }

    // Accessors
    double getNumber1() const {
        return number1;
    }

    double getNumber2() const {
        return number2;
    }

    // Member functions for operations
    double add() const;

    double subtract() const;

    double multiply() const;

    double divide() const;
};

int main() {
    // Example usage
    Calculator calc(10, 5);

    // Accessing numbers
    std::cout << "Number 1: " << calc.getNumber1() << std::endl;
    std::cout << "Number 2: " << calc.getNumber2() << std::endl;

    // Performing operations
    std::cout << "Sum: " << calc.add() << std::endl;
    std::cout << "Difference: " << calc.subtract() << std::endl;
    std::cout << "Product: " << calc.multiply() << std::endl;
    
   
    std::cout << "Quotient: " << calc.divide() << std::endl;

    return 0;
}
