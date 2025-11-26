#include <stdio.h>

int main() {
    int nums[] = {1, 3, 3, 4};
    int n = 4;
    int max_val = 1000; // Assumption: numbers are not huge
    int freq[1001] = {0}; // Initialize frequency array to 0

    printf("Repeated element: ");
    for (int i = 0; i < n; i++) {
        if (freq[nums[i]] == 1) {
            printf("%d\n", nums[i]);
            break; // Found it, stop immediately
        }
        freq[nums[i]] = 1;
    }
    return 0;
}