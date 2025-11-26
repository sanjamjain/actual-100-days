#include <stdio.h>

int main() {
    // Example Input: {0, 4, 3, 1, 5} -> Missing is 2
    int nums[] = {0, 4, 3, 1, 5};
    int n = 5; // The size of the array (which means numbers are 0 to 5)
    
    // Note: If array size is n, the max number is n. 
    // So the actual range includes n+1 integers (0 to n). 
    // But the problem implies array size n contains n numbers from range 0..n.
    
    int expectedSum = (n * (n + 1)) / 2;
    int actualSum = 0;

    for (int i = 0; i < n; i++) {
        actualSum += nums[i];
    }

    printf("Missing Number: %d\n", expectedSum - actualSum);
    return 0;
}