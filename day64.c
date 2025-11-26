#include <stdio.h>
#include <string.h>

int main() {
    char s[5000];
    printf("Enter a string: ");
    scanf("%s", s);
    
    int n = strlen(s);
    int max_len = 0;
    int i, j;
    
    for (i = 0; i < n; i++) {
        int visited[256] = {0};
        int current_len = 0;
        for (j = i; j < n; j++) {
            if (visited[s[j]] == 1) {
                break;
            } else {
                visited[s[j]] = 1;
                current_len = j - i + 1;
                if (current_len > max_len) {
                    max_len = current_len;
                }
            }
        }
    }
    
    printf("%d\n", max_len);
    
    return 0;
}