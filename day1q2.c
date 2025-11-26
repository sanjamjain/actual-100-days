// Write a program to input two numbers and display their sum, difference, product, and quotient.

#include <stdio.h>
int main()
{
    int num1,num2,sum,mutiply,difference;
    float div;
    printf("Enter two nos \n");
    scanf("%d%d" ,&num1,&num2);

    sum = num1 +num2;
    difference = (num1>num2)?num1-num2:num2-num1;
    mutiply = num1*num2;
    div = (num1>num2)?(float)num1/num2:(float)num2/num1;
    printf("%d" ,sum);
    printf("\n%d\n%d\n%f" ,difference,mutiply,div );
}
