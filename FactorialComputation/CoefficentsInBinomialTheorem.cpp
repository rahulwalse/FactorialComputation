/*
    Implementation to evaluate all coefficients of x for a given value of n in Binomial Theorem.
*/

#include <iostream>
#include "factorialf.h"
using namespace std;

int CoefficentsInBinomialTheorem(int n)
{
    int coefficient;
    cout << "\nAll coefficients of x for given value of n=" << n << " are:" << endl;

    /*Calculate n!/r!(n-r)! till the value of r is less than or equal to n.*/
    for (int r = 0; r <= n; r++)
    {
        /*Calculating n!/r!(n-r)! and storing it in coefficient variable.*/
        coefficient = Factorial(n) / (Factorial(r) * Factorial(n - r));
        cout << " " << coefficient;                                     /*Displaying the coefficient*/
    }
    return 0;
}