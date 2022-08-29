/**

Simple terminal-based I/O calculator program created by Hasan Çakar.
First version created on 29 August 2022.
Released under Creative Commons, allowing total free use, distribution and modification.

**/

// calling libraries
#include <iostream>
#include <string>
using namespace std;

int main() {
    // establishes variables
    double firstNumber;
    double secondNumber;
    double finalAnswer;
    string selectOperator;
    // procedural process of calculator
    cout << "Welcome to simple calculator!";
    cout << "Enter your first number: ";
    cin >> firstNumber; //first user input variable
    cout << "Enter your second number: ";
    cin >> secondNumber; //second user input variable
    cout << "Enter the operator you wish to use (the choices are + for addition, - for subtraction, * for multiplication and / for division): ";
    cin >> selectOperator; //user input which selects operator of use
    // conditional chain determining results
    if (selectOperator == "+") { 
        // if condition for addition options
        finalAnswer = firstNumber + secondNumber;
        cout << firstNumber << " + " << secondNumber << " = " << finalAnswer;
    } else if (selectOperator == "-") { 
        // if condition for subtraction options
        finalAnswer = firstNumber - secondNumber;
        cout << firstNumber << " - " << secondNumber << " = " << finalAnswer;
    } else if (selectOperator == "*") {
        // if condition for multiplication options
        finalAnswer = firstNumber * secondNumber;
        cout << firstNumber << " * " << secondNumber << " = " << finalAnswer;
    } else if (selectOperator == "/") {
        // if condition for division options
        finalAnswer = firstNumber / secondNumber;
        cout << firstNumber << " / " << secondNumber << " = " << finalAnswer;
    } else {
        // error condition for irrelevant input
        cout << "Error: Unrecognised value entered for operator.";
    }
    return 0;
}
