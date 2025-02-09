#include <stdio.h>
#include <string.h>
int main() {
char text[100];
printf("Enter text: ");
fgets(text, sizeof(text), stdin);
for (int i = 0; text[i] != '\0'; i++) {
if (text[i] == 'h' && text[i + 1] == 't' && text[i + 2] == 'e') {
text[i] = 't'; text[i + 1] = 'h'; text[i + 2] = 'e';
}
if (text[i] == 'r' && text[i + 1] == 'e' && text[i + 2] == 'c' &&
text[i + 3] == 'i' && text[i + 4] == 'e' && text[i + 5] == 'v' &&
text[i + 6] == 'e') {
text[i + 3] = 'e'; text[i + 4] = 'i';
}
}
printf("Fixed text: %s", text);
return 0;
}