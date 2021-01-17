/*
    Implementation for multiplying two numbers using addition.

    For this multiplication using addition, we are going to add second number times the first number,
    for example, for 2X3 we will add first number 2, 3 times to get the desired multiplication. If the
    second number is negative, make it positive number and multiply by adding first number and then after
    the multiplication change the sign of the product again to negative.
*/
int MultiplicationByAddition(int first_num, int second_num)
{
    int multiplication = 0;
    /*
        If the second number is negative, then make the number positive and then return the product with 
        altered sign to get the correct sign for the product.
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