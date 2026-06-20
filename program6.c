/*
    START
        Accept the first number as NO1
        Accept the second number as NO2
        Perform addition of NO1 and NO2
        Display the result
    STOP
*/

#include<stdio.h>

int main()
{
    //Variable creation with default values(0.0f)
    float i = 0.0f, j = 0.0f, k = 0.0f;

    printf("Enter the first number:\n");
    scanf("%f",&i);

    printf("Enter the second number:\n");
    scanf("%f",&j);

    k = i + j;

    printf("Addition is : %f\n",k);

    return 0;
}