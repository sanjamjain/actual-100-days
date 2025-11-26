#include <stdio.h>

int main() {
    char str[1000];
    char longest_word[1000] = "";
    char current_word[1000];
    int i = 0, k = 0;
    int current_len = 0;
    int max_len = 0;

    printf("Enter a sentence: ");
    fgets(str, 1000, stdin);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ' || str[i] == '\n') {
            current_word[current_len] = '\0';
            if (current_len > max_len) {
                max_len = current_len;
                k = 0;
                while (current_word[k] != '\0') {
                    longest_word[k] = current_word[k];
                    k++;
                }
                longest_word[k] = '\0';
            }
            current_len = 0;
        } else {
            current_word[current_len] = str[i];
            current_len++;
        }
    }
    
    current_word[current_len] = '\0';
    if (current_len > max_len) {
        max_len = current_len;
        k = 0;
        while (current_word[k] != '\0') {
            longest_word[k] = current_word[k];
            k++;
        }
        longest_word[k] = '\0';
    }

    printf("%s\n", longest_word);
    return 0;
}