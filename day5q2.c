#include <stdio.h>

int main() {
    int total_seconds_input;
    int hours, minutes, seconds;

    printf("Enter time in seconds: ");
    scanf("%d", &total_seconds_input);

    hours = total_seconds_input / 3600;
    
    minutes = (total_seconds_input % 3600) / 60;
    
    seconds = total_seconds_input % 60;

    printf("%d:%d:%d\n", hours, minutes, seconds);

    return 0;
}