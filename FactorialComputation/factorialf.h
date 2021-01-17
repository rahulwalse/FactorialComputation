/*
	This header file contains declarations for all the functions that are used to perform 
	various calculations like factorial of a number, finding largest factorial, determine 
	whether given number is	factorial and the coefficients of binomial theorem for given 
	values of n.
*/

#ifndef FACTORIALF_H
#define FACTORIALF_H

int Factorial(int number);
void OneByFactorial();
void FactorialExpression();
float Exponent(int base, int exponent);
int IsNumberFactorial(int number);
int DetermineFactorial(int number);
int LargestFactorial(int number);
int MultiplicationByAddition(int first_num, int second_num);
int DivisionBySubtraction(int dividend, int divisor);
int CoefficentsInBinomialTheorem(int n);

#endif