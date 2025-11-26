#include <stdio.h>

int main() {
    char str[1000];
    int freq[26] = {0};
    int i = 0;
    int found = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            int index = str[i] - 'a';
            freq[index]++;
            if (freq[index] > 1) {
                printf("%c\n", str[i]);
                found = 1;
                break;
            }
        }
    }

    if (found == 0) {
        printf("No repeating lowercase alphabet found.\n");
    }

    return 0;
}