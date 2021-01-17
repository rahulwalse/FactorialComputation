/*
    Implementation for calculating x^n/n! for the given values of x and n.
*/

#include <iostream>
#include "factorialf.h"
using namespace std;

void FactorialExpression()
{
    int number, power;  float x_raiseto_n, factorial;
    cout << "\nTo calculate x^n/n!, enter the value for number x and its power n:" << endl;
    cout << "\nx="; cin >> number;
    cout << "n="; cin >> power;

    /*To calculate x^n we use Exponent() function.*/
    x_raiseto_n = Exponent(number, power);
    /*To calculate n! we use Factorial() function.*/
    factorial = Factorial(power);
    /*Calculate and display x^n/n!*/
    cout << "\nThe value of x^n/n! for x=" << number << " and y=" << power << " is " << x_raiseto_n / factorial;
}