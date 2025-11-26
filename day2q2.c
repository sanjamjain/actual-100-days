//Write a program to calculate the area and circumference of a circle given its radius.


#include <stdio.h>
int main()
{
    int r;
    float per,area;
    printf("Enter the radius \n");
    scanf("%d" ,&r);

    per = 2.0*(22.0/7.0)*r;
    area = (22.0/7.0)*(r*r);

    printf("circumference : \t%f \narea : \t%f" ,per,area);
}
