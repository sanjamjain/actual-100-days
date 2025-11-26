//Write a program to find and display the sum of the first n natural numbers.

#include <stdio.h>
int main()
{
    int num1;
    printf("Enter the end point \n");
    scanf("%d" ,&num1);
    int sum ,i;
    for(i = 1;i<= num1;i++)
    {
        sum+=i;
    }
    printf("%d" ,sum);
    

}

