#include <stdio.h>
#include <string.h>
void recursive(int n)
{
   if(n<0)
   {
       return;
   }
   printf("%d\t",n);
    
    recursive(n-1);
}
int main() {
  int n;
  printf("Enter the number: ");
  scanf("%d", &n);

  recursive(n);      
  return 0;
}