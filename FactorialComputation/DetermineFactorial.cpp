/*
    This is another implementation for determining whether given number is a Factorial number by calculating
    factorial of numbers beginning from 1 and comparing each factorial value to given number and so on.
*/

#include <iostream>
using namespace std;

int DetermineFactorial(int number)
{
    int count = 1, factorial = 1;
    /*Calculate factorial until the factorial value is less than the given number.*/
    while (factorial < number)
    {
        count = count + 1;
        factorial = factorial * count;
    }
    /*If the value of factorial is equal to the given number, then the given number is a Factorial number.*/
    if (factorial == number)
    {
        cout << "\nThe given number " << number << " is a factorial number as " << count << "! = " << number << "." << endl;
    }
    else
    {
        cout << "\nThe given number " << number << " is not a factorial number." << endl;
    }
    return 0;
}