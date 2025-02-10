#include <stdio.h>
#include<string.h>
#include<ctype.h>
int main() {
    int len;
    char str[50];
    printf("Enter the string:\n");
    scanf("%s",&str);
    len = strlen(str);
    printf("Length : %d\n",len);
    if(len<5||len>15)
    {
        printf("Invalid\n");
        return 1;
    }
    else
    {
        printf("Valid\n");
    }
   
    int flag = 1; 
    for (int i = 0; i < len; i++) {
        if (!isalpha(str[i])) 
        {
            flag = 0; 
            break; 
        }
    }

    if (flag == 1) {
        printf("LETTER\n");
    }

    return 0;
}