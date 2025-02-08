#include<stdio.h>
int main(){
    int n,a[n];
    int max = 0,count = 0;
    printf("Enter the size:\n");
    scanf("%d",&n);
    printf("Enter the price of stacks : \n");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        if(a[i]>max){
            max=a[i];
            count=1;
        }
        else if(a[i]==max){
            count++;
        }
    }
    printf("Maximum price : %d\n",max);
    printf("Number of occurence : %d\n",count);
    return 0;
}
