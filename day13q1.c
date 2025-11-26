#include <stdio.h>

int main() {
    double num1, num2, result;
    char op;

    printf("Enter <num1> <num2> <operator>: ");
    scanf("%lf %lf %c", &num1, &num2, &op);

    switch (op) {
        case '+':
            result = num1 + num2;
            printf("%.2lf\n", result);
            break;
        case '-':
            result = num1 - num2;
            printf("%.2lf\n", result);
            break;
        case '*':
            result = num1 * num2;
            printf("%.2lf\n", result);
            break;
        case '/':
            if (num2 == 0) {
                printf("Error: Division by zero\n");
            } else {
                result = num1 / num2;
                printf("%.2lf\n", result);
            }
            break;
        case '%':
            if ((long)num2 == 0) {
                printf("Error: Division by zero\n");
            } else {
                result = (long)num1 % (long)num2;
                printf("%.0lf\n", result);
            }
            break;
        default:
            printf("Error: Invalid operator\n");
            break;
    }

    return 0;
}