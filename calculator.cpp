// calculator.cpp
#include <iostream>
#include <string>
#include <sstream>

class Calculator {
public:
    double add(double a, double b) { return a + b; }
    double subtract(double a, double b) { return a - b; }
    double multiply(double a, double b) { return a * b; }
    double divide(double a, double b) { 
        if (b == 0) throw std::runtime_error("Division by zero!");
        return a / b; 
    }
};

int main(int argc, char* argv[]) {
    if (argc != 4) {
        std::cout << "Usage: calculator.exe <num1> <operator> <num2>" << std::endl;
        std::cout << "Example: calculator.exe 5 + 3" << std::endl;
        return 1;
    }

    try {
        Calculator calc;
        double a = std::stod(argv[1]);
        double b = std::stod(argv[3]);
        std::string op = argv[2];
        double result;

        if (op == "+") result = calc.add(a, b);
        else if (op == "-") result = calc.subtract(a, b);
        else if (op == "*") result = calc.multiply(a, b);
        else if (op == "/") result = calc.divide(a, b);
        else {
            std::cout << "Invalid operator! Use +, -, *, /" << std::endl;
            return 1;
        }

        std::cout << a << " " << op << " " << b << " = " << result << std::endl;
        return 0;
    }
    catch (const std::exception& e) {
        std::cout << "Error: " << e.what() << std::endl;
        return 1;
    }
}