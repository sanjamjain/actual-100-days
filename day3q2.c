// Write a program to swap two numbers using a third variable.

#include <stdio.h>
int main()
{
    int num1,num2,num3;
    printf("Enter two nos \n");
    scanf("%d%d" ,&num1,&num2);

    printf("--- Before Swapping ---\n");
    printf("Value of a: %d\n", num1);
    printf("Value of b: %d\n", num2);

    num3 = num2;
    num2 = num1;
    num1 = num3;
    printf("--- after Swapping ---\n");
    printf("Value of a: %d\n", num1);
    printf("Value of b: %d\n", num2);


}