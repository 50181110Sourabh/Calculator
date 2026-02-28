#include <iostream>
using namespace std;

int main() {
    char operation;
    double num1, num2, result;
    char choice;
    
    do {
        // Display menu
        cout << "\n=== Simple Calculator ===\n";
        cout << "Enter operation (+, -, *, /): ";
        cin >> operation;
        
        // Get numbers from user
        cout << "Enter first number: ";
        cin >> num1;
        cout << "Enter second number: ";
        cin >> num2;
        
        // Perform calculation based on operation
        switch(operation) {
            case '+':
                result = num1 + num2;
                cout << num1 << " + " << num2 << " = " << result << endl;
                break;
                
            case '-':
                result = num1 - num2;
                cout << num1 << " - " << num2 << " = " << result << endl;
                break;
                
            case '*':
                result = num1 * num2;
                cout << num1 << " * " << num2 << " = " << result << endl;
                break;
                
            case '/':
                // Check for division by zero
                if (num2 != 0) {
                    result = num1 / num2;
                    cout << num1 << " / " << num2 << " = " << result << endl;
                } else {
                    cout << "Error: Division by zero is not allowed!" << endl;
                }
                break;
                
            default:
                cout << "Error: Invalid operation!" << endl;
        }
        
        // Ask if user wants to continue
        cout << "\nDo you want to perform another calculation? (y/n): ";
        cin >> choice;
        
    } while (choice == 'y' || choice == 'Y');
    
    cout << "Thank you for using the calculator. Goodbye!\n";
    
    return 0;
}