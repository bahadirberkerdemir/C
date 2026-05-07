#include <stdio.h>
#include <string.h>
#define N 100

void enc(char *str) {
    int i;
    for (i = 0; str[i] != '\0'; i++) {
        char ch = str[i];
        
        if ((ch >= 'a' && ch < 'z') || (ch >= 'A' && ch < 'Z')) str[i] = ch+1;
        else if (ch=='z') str[i]='a';
        else if (ch=='Z') str[i]='A';
    }
}

int main() {
    char str[N];

    puts("Enter a string:");
    gets(str);

    printf("Before: %s\n", str);
    enc(str);
    printf("After: %s\n", str);

    return 0;
}
