// Write a program to swap two numbers without using a third variable.


#include <stdio.h>
int main()
{
    int num1,num2;
    printf("Enter two nos \n");
    scanf("%d%d" ,&num1,&num2);
    
    printf("--- Afteer Swapping ---\n");
    printf("Value of a: %d\n", num1);
    printf("Value of b: %d\n", num2);
    num1 = num1 +num2;
    num2 = num1 ;
    num1 = num1 - num2;
    
    printf("--- After Swapping ---\n");
    printf("Value of a: %d\n", num1);
    printf("Value of b: %d\n", num2);




}