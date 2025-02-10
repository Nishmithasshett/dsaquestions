#include <stdio.h>
#include <string.h>

int main() {
    int n;
    int a[50];
    printf("Enter the size of array:\n");
    scanf("%d", &n);

    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]); 
    }

    int j = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] != 0) {
          
            if (i != j) {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
            j++;
        }
    }

    printf("Array after moving zeros to the end:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}
