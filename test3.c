#include <stdio.h>

int main() {
    int n, sum = 0; 
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]); 
        sum = sum + arr[i]; // Add each element to sum
    }

    printf("Sum of array elements: %d\n", sum);

    return 0;
}
