#include <stdio.h>

int main() {
    FILE *fptr;
    char ch;
    int characters = 0, words = 0, lines = 0;
    int insideWord = 0; // Flag to track word boundaries

    fptr = fopen("input.txt", "r"); // Make sure input.txt exists
    if (fptr == NULL) {
        printf("Please create input.txt first.\n");
        return 1;
    }

    while ((ch = fgetc(fptr)) != EOF) {
        characters++;

        if (ch == '\n') {
            lines++;
        }

        // Logic to count words
        if (ch == ' ' || ch == '\n' || ch == '\t') {
            insideWord = 0;
        } else if (insideWord == 0) {
            insideWord = 1;
            words++;
        }
    }
    
    // Adjust line count if file doesn't end with newline
    if (characters > 0) lines++; 

    printf("Characters: %d\nWords: %d\nLines: %d\n", characters, words, lines);
    fclose(fptr);
    return 0;
}