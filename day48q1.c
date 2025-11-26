#include <stdio.h>

int main() {
    char str1[1000], str2[1000];
    char temp[2000];
    int len1 = 0, len2 = 0, i = 0, j = 0;
    
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
        printf("Not rotation\n");
        return 0;
    }

    int k = 0;
    for (i = 0; i < len1; i++) {
        temp[k] = str1[i];
        k++;
    }
    for (i = 0; i < len1; i++) {
        temp[k] = str1[i];
        k++;
    }
    temp[k] = '\0';

    int temp_len = k;
    int found = 0;

    for (i = 0; i <= temp_len - len1; i++) {
        int match = 1;
        for (j = 0; j < len1; j++) {
            if (temp[i + j] != str2[j]) {
                match = 0;
                break;
            }
        }
        if (match == 1) {
            found = 1;
            break;
        }
    }

    if (found) {
        printf("Rotation\n");
    } else {
        printf("Not rotation\n");
    }

    return 0;
}