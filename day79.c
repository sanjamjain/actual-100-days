#include <stdio.h>

int main() {
    FILE *fptr;
    int num;
    int sum = 0;
    int count = 0;

    fptr = fopen("numbers.txt", "r");
    if (fptr == NULL) {
        printf("Error: numbers.txt not found.\n");
        return 1;
    }

    printf("Numbers found: ");
    while (fscanf(fptr, "%d", &num) == 1) {
        printf("%d ", num);
        sum += num;
        count++;
    }

    if (count > 0) {
        printf("\nSum: %d\n", sum);
        printf("Average: %.2f\n", (float)sum / count);
    } else {
        printf("\nNo numbers found in file.\n");
    }

    fclose(fptr);
    return 0;
}