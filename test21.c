// Online C compiler to run C program online
#include <stdio.h>
#define max_length 500
int main() {
    // Write C code here
    int n,a[max_length],i,j,k;
    printf("Enter the size:\n");
    scanf("%d",&n);
    printf("Enter the elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int max_sum = 0; 
    for (i = 0; i <= n - 3; i++) {
        int current_sum = 0; 
        for (j = i; j < i + 3; j++) {
            current_sum = current_sum + a[j];
        }
        if (current_sum > max_sum) {
            max_sum = current_sum;
        }
    }
    printf("Max Sum : %d\n",max_sum);
    return 0;
}