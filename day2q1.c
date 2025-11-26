// Write a program to calculate the area and perimeter of a rectangle given its length and breadth.

#include <stdio.h>
int main()
{
    int le,br,per,area;
    printf("Enter two nos \n");
    scanf("%d%d" ,&le,&br);

    per = 2*(le +br);
    area = le*br;

    printf("perimeter : \t%d \narea : \t%d" ,per,area);
}
