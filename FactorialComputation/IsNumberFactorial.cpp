/*
    Implementation for determining whether given number is a Factorial number.

    For this we keep on dividing the number (quotient) with count and increase count by 1 after every
    division until the quotient becomes 1, if is 1, it means the number is a factorial number.
*/

#include <iostream>
using namespace std;

int IsNumberFactorial(int number)
{
    int quotient = number, count = 1;
    if (number <= 0)
    {
        cout << "\nThe " << number << " cannot be a factorial number" << endl;
    }
    else
    {
        /*Check if the remainder for quotient divided by count is zero.*/
        while (quotient % count == 0)
        {
            /*Divide the quotient by count and store in quotient and increment the count.*/
            quotient = quotient / count;
            count = count + 1;
        }
        if (quotient == 1)                      /*When the quotient becomes 1 it means it is a Factorial number.*/
        {
            cout << "\nThe given number " << number << " is a Factorial number as " << count - 1 << "! = " << number << "." << endl;
        }
        else
        {
            cout << "\nThe given number " << number << " is not a Factorial number." << endl;
        }
    }
    return 0;
}