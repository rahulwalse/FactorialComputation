/*
    Implementation for calculating factorial for given number.
*/
int Factorial(int number)
{
    long int factorial = 1;
    /*Check if the number is 0, if it is 0 the factorial is 1, as by definition 0! is 1.*/
    if (number == 0)
    {
        return factorial;
    }
    else
    {
        /*Set the count to number and decrement for each iteration, multiply it to factorial.*/
        for (int count = number; count >= 1; count--)
        {
            factorial = factorial * count;
        }
        return factorial;
    }
}