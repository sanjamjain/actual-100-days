#include <stdio.h>

int main() {
    int dd, mm, yyyy;
    char *months[] = {
        "", "Jan", "Feb", "Mar", "Apr", "May", "Jun", 
        "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"
    };

    printf("Enter date (dd/mm/yyyy): ");
    scanf("%d/%d/%d", &dd, &mm, &yyyy);

    if (mm >= 1 && mm <= 12) {
        printf("%d-%s-%d\n", dd, months[mm], yyyy);
    } else {
        printf("Invalid month\n");
    }

    return 0;