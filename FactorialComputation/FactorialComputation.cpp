// FactorialComputation.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Program to calculate factorial and various other operations using the factorial computation.

#include <iostream>
using namespace std;

const int FIRSTCHOICE = 1, LASTCHOICE = 10;


//Functions declaration.
int Factorial(int number);
void CalculateOneByFactorialNumber();
void CalculateFactorialExpression();
float Exponent(int base, int exponent);
int IsAFactorialNumber(int number);
int DetermineFactorialTwo(int number);
int FindLargestFactorialOfGivenNumber(int number);
int JustFactorial(int number);
int MultiplicationByAddition(int first_num, int second_num);
int DivisionBySubtraction(int dividend, int divisor);
int EvaluateCoefficentsInBinomialTheorem(int n);

int main()
{
    int choice, number, power, first_num, second_num; char conti; //Declaring required variables.

    do
    {
        cout << "\n1. Calculate factorial for given number\n2. Calculate 1/n! for given value of n\n3. Calculate x^n/n! for given values of x and y\n4. Calculate x^n for given values of x and n";
        cout << "\n5. Find whether the given number is a Factorial number\n6. Find whether the given number is a Factorial number (Method 2)";
        cout << "\n7. Find largest factorial for given number\n8. Multiplying two numbers using addition operation\n9. Division by subtracting divisor";
        cout << "\n10. Evaluate all the coefficients of x for a given value of n:\nWhere\t\t\t    n!\n\t\t\t----------\n\t\t\t r!(n-r)!\nEnter your choice : " << endl;
        cin >> choice;

        if (choice < FIRSTCHOICE or choice > LASTCHOICE)
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
                    if (number < 0)   //Check if the number entered by the user is not less than zero.
                    {
                        cout << "\nThe factorial for " << number << "! cannot be calculated." << endl;
                    }
                    else
                    {
                        cout << "\nThe Factorial of " << number << " is " << Factorial(number) << endl;
                    }
                    break;

            case 2: CalculateOneByFactorialNumber();
                    break;

            case 3: CalculateFactorialExpression();
                    break;

            case 4: cout << "\nEnter the value for base x and exponent n:" << endl;
                    cout << "Number x=";   cin >> number;
                    cout << "Power of x, n=";   cin >> power;
                    cout << number << "^" << power << " is " << Exponent(number, power);
                    break;

            case 5: cout << "\nEnter the number to determine whether it is a Factorial number:\nNumber=";
                    cin >> number;
                    IsAFactorialNumber(number);
                    break;

            case 6: cout << "\nNote: This method calculates the factorial for number starting from 1 and comparing the value with";
                    cout << "\ngiven number if the value is greater than the given number,it means the number is not a factorial number" << endl;
                    cout << "\nEnter the number to determine whether it is a Factorial number:\nNumber=";
                    cin >> number;
                    DetermineFactorialTwo(number);
                    break;

            case 7: cout << "\nEnter the number for which to find the largest factorial number:\nNumber=";
                    cin >> number;
                    FindLargestFactorialOfGivenNumber(number);
                    break;

            case 8: cout << "\nEnter the value for two numbers to multiply by using addition:\n*Do not enter fractional values";
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
                        cout << "\nCannot be divided by " << divisor << "!" << endl;
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
                        EvaluateCoefficentsInBinomialTheorem(number);
                    }
                    break;
            }
        }
        cout << "\nDo you want to continue? (Y/N)" << endl;
        cin >> conti;
    } while (conti == 'Y' or conti == 'y');
}

//Implementation for calculating factorial for given number.
int Factorial(int number)
{
    long int factorial = 1;

    if (number == 0)  //Check if the number is 0, if it is 0 the factorial is 1 -- by definition 0! is 1.
    {
        return factorial;
    }
    else
    {
        for (int count = number; count >= 1; count--)   //Set the count to number and decrement for each iteration.
        {
            factorial = factorial * count;  //Multiply the factorial with the count, repeat until count value reaches 1.
        }
        return factorial;
    }
}

//Implementation for calculating factorial 1/n! for given value of n.
void CalculateOneByFactorialNumber()
{
    int number_n;   float factorial = 1;
    //As we already can calculate the factorial using Factorial() function, we can use it to calculate 1/n! as well.
    cout << "\nEnter the value of n to calculate 1/n!: ";
    cin >> number_n;

    if (number_n < 0)   //Check if the number entered by the user is not less than zero.
    {
        cout << "\nThe factorial for " << number_n << "! cannot be calculated." << endl;
    }
    else
    {
        if (number_n == 0)    //If the number entered is zero, the 0! is 1 by definition.
        {
            cout << "\nAs 0! is 1, the value of 1/" << number_n << "! is " << 1 / factorial;
        }
        else
        {
            factorial = Factorial(number_n);    //Storing the value returned by Factorial(); function in factorial, which is of float type.
            cout << "\nFor n=" << number_n << ", the value of 1/" << number_n << "! is " << 1 / factorial;    //Value is calculated by dividing 1 by the value stored in factorial.
        }
    }
}

//Implementation for calculating x^n/n! for the given values of x and n.
void CalculateFactorialExpression()
{
    int number, power;  float x_raiseto_n, factorial;
    cout << "\nTo calculate x^n/n!, enter the value for number x and its power n:" << endl;
    cout << "\nx="; cin >> number;
    cout << "n="; cin >> power;

    //To calculate x^n we use Exponent() function.
    x_raiseto_n = Exponent(number, power);

    //To calculate n! we use Factorial() function.
    factorial = Factorial(power);

    //Calculate and display x^n/n!
    cout << "\nThe value of x^n/n! for x=" << number << " and y=" << power << " is " << x_raiseto_n / factorial;
}

//Method for calculating x raise to y (x^y).
float Exponent(int base, int exponent)
{
    float baseraisetoexponent;

    baseraisetoexponent = base;

    if (exponent < 0)  //If the exponent is negative, the term as x^-n becomes 1/x^n.
    {
        exponent = -exponent; //Making the number positive for calculating the power.
        baseraisetoexponent = 1 / Exponent(base, exponent);   //Calculating the 1/x^n.
        return baseraisetoexponent;
    }
    else if (exponent == 0) //Any base number having exponent 0 is 1.
    {
        return 1;
    }
    else    //For positive value of power
    {
        for (int count = 1; count < exponent; count++)
        {
            baseraisetoexponent = baseraisetoexponent * base;
        }
        return baseraisetoexponent;
    }
}

//Implementation for determining whether given number is a Factorial number.
int IsAFactorialNumber(int number)
{
    int quotient = number, count = 1;
    if (number <= 0)
    {
        cout << "\nThe " << number << " cannot be a factorial number" << endl;
    }
    else
    {
        while (quotient % count == 0)           //Check if the remainder for quotient divided by count is zero.
        {
            quotient = quotient / count;
            count = count + 1;
        }
        if (quotient == 1)                      //When the quotient becomes 1 it means it is a Factorial number.
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

/*
    Implementation for determining whether given number is a Factorial number by calculating factorial of numbers beginning from 1
    and comparing each factorial value to given number and so on.
*/
int DetermineFactorialTwo(int number)
{
    int count = 1, factorial = 1;

    while (factorial < number)  //Calculate factorial until the factorial value is less than the given number.
    {
        count = count + 1;
        factorial = factorial * count;
    }
    if (factorial == number)    //If the value of factorial is equal to the given number, then the given number is a Factorial number.
    {
        cout << "\nThe given number " << number << " is a factorial number as " << count << "! = " << number << "." << endl;
    }
    else
    {
        cout << "\nThe given number " << number << " is not a factorial number." << endl;
    }
    return 0;
}

//Method to calculate and return value of Factorial.
int JustFactorial(int number)
{
    int factorial = 1;
    for (int count = number; count >= 1; count--)   //Set the count to number and decrement for each iteration.
    {
        factorial = factorial * count;  //Multiply the factorial with the count, repeat until count value reaches 1.
    }
    return factorial;
}

//Implementation for finding the largest factorial number for any given number.
int FindLargestFactorialOfGivenNumber(int number)
{
    int count = 1, factorial = 1, quotient;
    while (number % factorial == 0)
    {
        quotient = number / factorial;
        count = count + 1;
        factorial = JustFactorial(count);
    }
    cout << "\nThe largest factorial number, which is a factor of " << number << " is " << JustFactorial(count - 1) << endl;
    return 0;
}

//Implementation for multiplying two numbers using addition.
int MultiplicationByAddition(int first_num, int second_num)
{
    int multiplication = 0;
    /*
        For this multiplication using addition, we are going to add second number times the first number, for example for
        2X3 we will add first number 2, 3 times to get the desired multiplication.
        If the second number is negative, make it positive number and multiply by adding first number and then after the
        multiplication change the sign of the product again to negative.
    */

    if (second_num < 0)
    {
        second_num = -second_num;
        for (int count = 1; count <= second_num; count++)
        {
            multiplication = multiplication + first_num;
        }
        return -multiplication;
    }
    else
    {
        for (int count = 1; count <= second_num; count++)
        {
            multiplication = multiplication + first_num;
        }
        return multiplication;
    }
}

//Implementation for dividing a number by subtracting the divisor.
int DivisionBySubtraction(int dividend, int divisor)
{
    int remainder = dividend, quotient = 0;

    if (dividend == 0)
    {
        return dividend;    //If the dividend is zero, the division will result in zero.
    }
    else
    {
        while (remainder >= 0)
        {
            remainder = remainder - divisor;    //Subtract divisor from dividend till the remainder is greater than or equal to 0.
            quotient++;                         //Increment the count with each iteration, finally we will have our quotient.
        }
        return quotient - 1;

    }
}

//Implementation to evaluate all coefficients of x for a given value of n in Binomial Theorem.
int EvaluateCoefficentsInBinomialTheorem(int n)
{
    int coefficient;
    cout << "\nAll coefficients of x for given value of n=" << n << " are:" << endl;

    //Calculate n!/r!(n-r)! till the value of r is less than or equal to n.
    for (int r = 0; r <= n; r++)
    {
        coefficient = Factorial(n) / (Factorial(r) * Factorial(n - r)); //Calculating n!/r!(n-r)! and storing it in coefficient variable.
        cout << " " << coefficient;                                     //Displaying the coefficient
    }
    return 0;
}