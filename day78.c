#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
    FILE *fptr;
    char ch;
    int vowels = 0;
    int consonants = 0;

    fptr = fopen("input.txt", "r");

    if (fptr == NULL) {
        printf("Error: Could not open 'input.txt'.\n");
        exit(1);
    }

    while ((ch = fgetc(fptr)) != EOF) {
        if (isalpha(ch)) {
            char lower_ch = tolower(ch);
            
            if (lower_ch == 'a' || lower_ch == 'e' || lower_ch == 'i' || 
                lower_ch == 'o' || lower_ch == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        }
    }

    printf("--- File Analysis ---\n");
    printf("Vowels     : %d\n", vowels);
    printf("Consonants : %d\n", consonants);

    fclose(fptr);
    return 0;
}