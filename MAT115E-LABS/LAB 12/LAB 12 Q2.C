#include <stdio.h>
#include <ctype.h>

void findCapitals(char *str, char *cap) {
    int i = 0, j = 0;
    while (str[i] != '\0') {

        if (str[i] >= 'A' && str[i] <= 'Z') {
            cap[j] = str[i];
            j++;
        }
        i++;
    }
}

int main() {
    FILE *fIn, *fOut;
    char sentence[100];
    char capitals[100];


    fIn = fopen("sentences.txt", "r");
    fOut = fopen("capitals.txt", "w");

    if (fIn == NULL || fOut == NULL) {
        printf("Error opening files.\n");
        return 1;
    }

    while (fgets(sentence, 100, fIn)) {
        findCapitals(sentence, capitals);
        fprintf(fOut, "%s\n", capitals);
    }

    fclose(fIn);
    fclose(fOut);
    return 0;
}
