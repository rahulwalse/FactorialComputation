/*
    Method for calculating x^y (or x raise to y), where x is base and y is exponent.
*/
float Exponent(int base, int exponent)
{
    float baseraisetoexponent;

    baseraisetoexponent = base;
    /*If the exponent is negative, the term as x^-n becomes 1/x^n.*/
    if (exponent < 0)
    {
        /*
            Making the number positive for calculating the power and calculate 1/x^n 
            using the same method
        */
        exponent = -exponent;
        baseraisetoexponent = 1 / Exponent(base, exponent);
        return baseraisetoexponent;
    }
    else if (exponent == 0)     /*Any base number having exponent 0 is 1.*/
    {
        return 1;
    }
    else                        /*For positive value of power*/
    {
        for (int count = 1; count < exponent; count++)
        {
            baseraisetoexponent = baseraisetoexponent * base;
        }
        return baseraisetoexponent;
    }
}