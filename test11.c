#include <stdio.h>

#define MAX_SIZE 100

int main() {
    int n;
    int a[MAX_SIZE]; 

    printf("Enter the size:\n");
    scanf("%d", &n);
    printf("Enter the temperature readings:\n");
    for (int i = 1; i <= n; i++) {
        scanf("%d", &a[i]);
    }

    for (int i = 1; i <= n; i++) {
        if (a[i] > 50) {
            printf("Fault Detected for reading %d: %d\n", i, a[i]);
        } else if (a[i] > 40 || a[i] < 20) {
            printf("Out of Range for reading %d: %d\n", i, a[i]);
        } else {
            printf("No fault detected for reading %d: %d\n", i, a[i]);
        }
    }

    return 0;
}