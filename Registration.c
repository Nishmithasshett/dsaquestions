#include <stdio.h>
#include <ctype.h>
#include <string.h>
int isValid(char *user) 
{
 if (strlen(user) < 5 || strlen(user) > 15 || !isalpha(user[0]))
 return 0;
for (int i = 0; user[i]; i++) 
{
 if (!isalnum(user[i])) return 0;
}
 return 1;
}
int main() 
{
 int n;
 printf("Enter number of usernames: ");
 scanf("%d", &n);
 char users[n][50];
 printf("Enter usernames:\n");
 for (int i = 0; i < n; i++) 
 {
  scanf("%s", users[i]);
 }
 for (int i = 0; i < n; i++) 
 {
  printf("%s is %s\n", users[i], isValid(users[i]) ? "valid" : "not valid");
 }
 return 0;
}