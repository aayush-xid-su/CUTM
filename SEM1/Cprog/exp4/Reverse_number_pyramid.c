#include <stdio.h>

int main() {
    int n = 5;

    for (int i = n; i >= 1; i--) {
        // Print leading spaces for pyramid alignment
        for (int j = 1; j <= i - 1; j++) {
            printf(" ");
        }
        
        // Print the row number 'i', repeated (n - i + 1) times
        for (int k = 1; k <= n - i + 1; k++) {
            printf("%d ", i);
        }
        
        printf("\n");
    }

    return 0;
}