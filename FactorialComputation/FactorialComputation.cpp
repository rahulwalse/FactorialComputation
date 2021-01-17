/* FactorialComputation.cpp : This file contains the 'main' function. Program execution begins and ends there.*/
/*
    This program is an implementation in C++ of algorithm for calculating the factorial including supplementary
    problems and algorithms for factorial computations from the book "How to Solve it by Computer" by R.G. Dromey.
*/

#include <iostream>
#include "factorialf.h"
using namespace std;

const int FIRSTCHOICE = 1, LASTCHOICE = 10;

int main()
{
    int choice, number, power, first_num, second_num; char conti;

    do
    {
        cout << "\n1. Calculate factorial for given number\n2. Calculate 1/n! for given value of n\n3. Calculate x^n/n! for given values of x and y";
        cout << "\n4. Calculate x^n for given values of x and n\n5. Find whether the given number is a Factorial number";
        cout << "\n6. Find whether the given number is a Factorial number (Method 2)\n7. Find largest factorial for given number";
        cout << "\n8. Multiplying two numbers using addition operation\n9. Division by subtracting divisor";
        cout << "\n10. Evaluate all the coefficients of x for a given value of n:";
        cout<<"\nWhere\t\t\t    n!\n\t\t\t----------\n\t\t\t r!(n-r)!\nEnter your choice : " << endl;
        cin >> choice;
        /*Check that the choice entered by the user is from the list.*/
        if (choice < FIRSTCHOICE || choice > LASTCHOICE)
        {
            cout << "\nYour choice is invalid. Exiting the program." << endl;
            return 0;
        }
        else
        {
            switch (choice)
            {
                case 1: cout << "\nEnter the number to calculate factorial: " << endl;
                        cin >> number;
                        /*Check that the number entered by the user is not less than zero.*/
                        if (number < 0)
                        {
                            cout << "\nThe factorial for " << number << "! cannot be calculated." << endl;
                        }
                        else
                        {
                            cout << "\nThe Factorial of " << number << " is " << Factorial(number) << endl;
                        }
                        break;

                case 2: OneByFactorial();
                        break;

                case 3: FactorialExpression();
                        break;

                case 4: cout << "\nEnter the value for base x and exponent n:" << endl;
                        cout << "Number x=";   cin >> number;
                        cout << "Power of x, n=";   cin >> power;
                        cout << number << "^" << power << " is " << Exponent(number, power);
                        break;

                case 5: cout << "\nEnter the number to determine whether it is a Factorial number:\nNumber=";
                        cin >> number;
                        IsNumberFactorial(number);
                        break;

                case 6: cout << "\nNote: This method calculates the factorial starting from 1 and comparing the";
                        cout << "value with given number\nif the value is greater than the given number,it means";
                        cout << "the number is not a factorial number" << endl;
                        cout << "\nEnter the number to determine whether it is a Factorial number:\nNumber=";
                        cin >> number;
                        DetermineFactorial(number);
                        break;

                case 7: cout << "\nEnter the number for which to find the largest factorial number:\nNumber=";
                        cin >> number;
                        LargestFactorial(number);
                        break;

                case 8: cout << "\nEnter the value for two numbers to multiply by using addition*:";
                        cout << "\n* Do not enter fractional values";
                        cout << "\nFirst number= ";  cin >> first_num;
                        cout << "\nSecond number= "; cin >> second_num;
                        cout << "\nThe multiplication of " << first_num << " & " << second_num << " is " << MultiplicationByAddition(first_num, second_num) << endl;
                        break;

                case 9: int dividend, divisor;
                        cout << "\nEnter the values for dividend and divisor to perform division by subtraction:\n*Please do not enter fractional values";
                        cout << "\nDividend=";  cin >> dividend;
                        cout << "Divisor=";     cin >> divisor;
                        if (divisor == 0)
                        {
                            cout << "\nCannot divide by " << divisor << "!" << endl;
                        }
                        else
                        {
                            cout << "\nThe division of " << dividend << " by " << divisor << " is " << DivisionBySubtraction(dividend, divisor) << endl;
                        }
                        break;

                case 10:cout << "\nEnter the value for n\nn=";  cin >> number;
                        if (number < 0)
                        {
                            cout << "\nThe coefficients cannot be evaluated for n=" << number << endl;
                        }
                        else
                        {
                            CoefficentsInBinomialTheorem(number);
                        }
                        break;
            }
        }
        cout << "\nDo you want to continue? (Y/N)" << endl;
        cin >> conti;
    } while (conti == 'Y' || conti == 'y');
}