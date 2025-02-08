#include <stdio.h>
#define MAX_SIZE 100
int main() {
    int flag = 0;
    int n,id;
    int a[MAX_SIZE]; 
    int max = 0,max_i,count=0;
    printf("Enter the size:\n");
    scanf("%d", &n);
    printf("Enter the existing student Id's:\n");
    for (int i = 1;i <= n; i++) 
    {
        scanf("%d", &a[i]);
    }
    for(int i=1;i<=n;i++){
       if(a[i]>max)
       {
           max = a[i];
           max_i = i;
       }
    }
    printf("MAXIMUM : %d",max);
    for(int i=max_i;i<n;i++)
    {
        count++;
    }
    printf("\nCount : %d\n",count);
    if(count == 1)
     printf("1 BIT COUNT\n");
    else if(count == 2)
     printf("2 bit count\n");
    else if(count == 3)
    {
        max = max-100;
        printf("SUBSTARCTING 100 : %d\n",max);
    }
    else
    {
        max = max - 500;
        printf("SUBTRACTING 500 : %d",max);
    }
    return 0;
}