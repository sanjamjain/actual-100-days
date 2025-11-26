// Write a program to convert temperature from Celsius to Fahrenheit.
#include <stdio.h>
int main()
{
    float cel,fer;
    printf("Enter degree celcious \n");
    scanf("%f" ,&cel);
    fer = (9.0/cel)+32;
    printf("%d" ,fer);
}
