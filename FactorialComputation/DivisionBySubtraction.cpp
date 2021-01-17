/*
    Implementation for dividing a number by subtracting the divisor.

    For this, we subtract divisor from dividend till the remainder is greater than or equal to 0.
    After each subtraction we increment the count (quotient) by 1, when the condition is false, 
    we will have our quotient.
*/

int DivisionBySubtraction(int dividend, int divisor)
{
    int remainder = dividend, quotient = 0;

    if (dividend == 0)
    {
        /*If the dividend is zero, the division will result in zero.*/
        return dividend;
    }
    else
    {
        while (remainder >= 0)
        {
            remainder = remainder - divisor;
            quotient++;
        }
        return quotient - 1;
    }
}