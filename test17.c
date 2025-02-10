#include <stdio.h>
#include<string.h>
#include<ctype.h>
int main() {
    int n;
    char str[50];
    printf("Enter the messege:\n");
    scanf("%s",&str);
    int len = strlen(str);
    for(int i=0;i<len;i++)
    {
        char ch = tolower(str[i]);
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        {
            printf("Vowel\n");
        }
        else
        {
            printf("Consonants\n");
        }
    }
    return 0;
}
