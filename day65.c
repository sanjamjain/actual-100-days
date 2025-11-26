#include <stdio.h>
#include <string.h>

int main() {
    char s[5000], t[5000];
    
    printf("Enter string s: ");
    scanf("%s", s);
    printf("Enter string t: ");
    scanf("%s", t);
    
    int len_s = strlen(s);
    int len_t = strlen(t);
    
    if (len_s != len_t) {
        printf("Not Anagram\n");
        return 0;
    }
    
    int freq[26] = {0};
    int i;
    
    for (i = 0; i < len_s; i++) {
        freq[s[i] - 'a']++;
        freq[t[i] - 'a']--;
    }
    
    int is_anagram = 1;
    for (i = 0; i < 26; i++) {
        if (freq[i] != 0) {
            is_anagram = 0;
            break;
        }
    }
    
    if (is_anagram) {
        printf("Anagram\n");
    } else {
        printf("Not Anagram\n");
    }
    
    return 0;
}