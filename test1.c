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

    printf("Array elements are: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]); 
    }
    return 0;
}
