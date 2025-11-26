#include <stdio.h>
#include <math.h>

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    
    double total_sum = (double)(n * (n + 1)) / 2.0;
    double x_double = sqrt(total_sum);
    
    int x_int = (int)x_double;
    
    if ((double)(x_int * x_int) == total_sum) {
        printf("%d\n", x_int);
    } else {
        printf("-1\n");
    }
    
    return 0;
}