#include <stdio.h>
void rotateArr(int a[], int n, int k) {
    for (int i = 0; i <= k; i++) {
              int first = a[0];
        for (int j = 0; j < n - 1; j++) {
            a[j] = a[j + 1];
        }
        a[n - 1] = first;
    }
}
int main() 
{
    int a[] = { 1, 2, 3, 4, 5, 6, 7};
    int k = 3;
    int n = sizeof(a) / sizeof(a[0]);
    rotateArr(a, n, k);

    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);
    return 0;
}
