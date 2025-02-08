#include <stdio.h>
#define MAX_SIZE 100
int main() {
    int flag = 0;
    int n,id;
    int a[MAX_SIZE]; 

    printf("Enter the size:\n");
    scanf("%d", &n);
    printf("Enter the existing student Id's:\n");
    for (int i = 1; i <= n; i++) 
    {
        scanf("%d", &a[i]);
    }
    printf("New user entry....\n");
    printf("Enter the user Id :\n");
    scanf("%d",&id);
    for(int i = 1;i<=n;i++)
    {
      if(id == a[i])
      {
          printf("Id already exist\n");
          flag = 1;
          break;
      }
    }
    if(flag==0)
     {
       printf("ID is available for registration\n");
     }

    return 0;
}