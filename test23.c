#include <stdio.h>
#include <stdlib.h>
void mergeArrays(int arr1[], int n1, int arr2[], int n2, int res[]) {
    for (int i = 0; i < n1; i++) {
        res[i] = arr1[i];
    }
    for (int i = 0; i < n2; i++) {
        res[n1 + i] = arr2[i];
    }
}
void bubbleSort(int res[], int n) {
    int i, j;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (res[j] > res[j + 1]) {
                int temp = res[j];
                res[j] = res[j + 1];
                res[j + 1] = temp;
            }
        }
    }
}
int main() {
    int arr1[] = {1, 3, 5};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int arr2[] = {2, 4, 6};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    int n3 = n1 + n2;
    int res[n3];
    mergeArrays(arr1, n1, arr2, n2, res);
    for (int i = 0; i < n1 + n2; i++) {
        printf("%d ", res[i]);
    }
    printf("\n");

    bubbleSort(res,n3);
        for (int i = 0; i < n3; i++) {
        printf("%d ", res[i]);
    }

    printf("\n");
   return 0;
}
