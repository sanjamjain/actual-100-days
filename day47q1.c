#include <stdio.h>

int main() {
    char str1[1000], str2[1000];
    int freq[256] = {0};
    int i = 0, len1 = 0, len2 = 0;
    int is_anagram = 1;

    printf("Enter first string: ");
    scanf("%s", str1);
    printf("Enter second string: ");
    scanf("%s", str2);

    while (str1[len1] != '\0') {
        len1++;
    }
    while (str2[len2] != '\0') {
        len2++;
    }

    if (len1 != len2) {
        is_anagram = 0;
    } else {
        for (i = 0; i < len1; i++) {
            freq[str1[i]]++;
            freq[str2[i]]--;
        }

        for (i = 0; i < 256; i++) {
            if (freq[i] != 0) {
                is_anagram = 0;
                break;
            }
        }
    }

    if (is_anagram) {
        printf("Anagrams\n");
    } else {
        printf("Not anagrams\n");
    }

    return 0;
}