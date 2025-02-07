#include <stdio.h>

int main() {
    int n;

    
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int max = arr[0], secondMax; 

    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            secondMax = max; // Previous max becomes second max
            max = arr[i]; // Update max
        } else if (arr[i] > secondMax && arr[i] != max) {
            secondMax = arr[i]; 
        }
    }

    printf("The second maximum element is: %d\n", secondMax);

    return 0;
}
