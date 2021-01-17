/*
    Implementation for calculating factorial 1/n! for given value of n.
*/

#include <iostream>
#include "factorialf.h"
using namespace std;

void OneByFactorial()
{
    int number_n;   float factorial = 1;
    /*As we already can calculate the factorial using Factorial() function, we can use it to calculate 1/n! as well.*/
    cout << "\nEnter the value of n to calculate 1/n!: ";
    cin >> number_n;
    /*Check if the number entered by the user is not less than zero.*/
    if (number_n < 0)
    {
        cout << "\nThe factorial for " << number_n << "! cannot be calculated." << endl;
    }
    else
    {
        /*If the number entered is zero, the 0! is 1 by definition.*/
        if (number_n == 0)
        {
            cout << "\nAs 0! is 1, the value of 1/" << number_n << "! is " << 1 / factorial;
        }
        else
        {
            /*Store the value returned by Factorial(); function in factorial, which is of float type.*/
            factorial = Factorial(number_n);
            cout << "\nFor n=" << number_n << ", the value of 1/" << number_n << "! is " << 1 / factorial;
        }
    }
}