/*
    Implementation of algorithm, where for a given integer number, find the largest factorial
    number present as a factor in the given integer number.
*/

#include <iostream>
#include "factorialf.h"
using namespace std;

int LargestFactorial(int number)
{
    int count = 1, factorial = 1, quotient;
    while (number % factorial == 0)
    {
        quotient = number / factorial;
        count = count + 1;
        factorial = Factorial(count);
    }
    cout << "\nThe largest factorial number which is present as factor in " << number << " is " << Factorial(count - 1) << endl;
    return 0;
}