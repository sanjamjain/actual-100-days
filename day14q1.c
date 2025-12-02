//Write a program to print the sum of the first n odd numbers.

#include <stdio.h>

int main() {
    int n;
    long long sum;

    printf("Enter n: ");
    scanf("%d", &n);
    
    sum = (long long)n * n;

    printf("%lld\n", sum);

    return 0;

}
