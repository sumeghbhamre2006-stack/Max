#include <iostream>
using namespace std;
class Calculator {
private:
    double numerator, denominator; 
public:
    void get_input();
    void perform_division();
};
void Calculator::get_input() {
    cout << "Enter Numerator (the number to be divided): ";
    cin >> numerator;
    cout << "Enter Denominator (the number to divide by): ";
    cin >> denominator;
}
void Calculator::perform_division() {
    try {
        if (denominator == 0) {
			throw (denominator); 
        } else {
            cout << "Result of division is: " << numerator / denominator << endl;
        }
    }
    catch (double error_value) { 
        cout << "Error: Division by zero is not allowed." << endl;
    }
}
int main() {
    Calculator calculation1; 
    Calculator calculation2;
    cout << "--- First Calculation ---" << endl;
    calculation1.get_input();
    calculation1.perform_division();
    cout << "\n--- Second Calculation ---" << endl;
    calculation2.get_input();
    calculation2.perform_division();
    return 0;
}
