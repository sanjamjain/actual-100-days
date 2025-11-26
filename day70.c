#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];

    printf("Enter a string: ");
    // Using scanset to read line including spaces
    scanf("%[^\n]s", str);

    for (int i = 0; str[i] != '\0'; i++) {
        // Capitalize first letter of the string
        if (i == 0) {
            str[i] = toupper(str[i]);
        }
        // Capitalize any letter that comes after a space
        else if (str[i - 1] == ' ') {
            str[i] = toupper(str[i]);
        }
    }

    printf("Output: %s\n", str);
    return 0;
}