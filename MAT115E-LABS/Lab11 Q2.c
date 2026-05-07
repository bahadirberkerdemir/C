#include <stdio.h>
#include <string.h>
#define N 100

int whereChar(char *str, char c) {
    int i;
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == c)
            return i;
    }
    return -1;
}

int main() {
    char string[N],ch;
    int index;

    puts("Enter a string:");
    gets(string);

    puts("Enter a character:");
    scanf("%c", &ch);

    index = whereChar(string, ch);

    if (index != -1)
        printf("%s\n", &string[index]);
    else
        printf("The string does not contain the char: '%c'",ch);

    return 0;
}
