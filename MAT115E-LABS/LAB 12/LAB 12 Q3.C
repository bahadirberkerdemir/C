#include <stdio.h>

int main() {
    FILE *fptr;
    int m, n, i, j;
    int element;
    int sum;

    fptr = fopen("matrix.txt", "r");
    if (fptr == NULL) {
        printf("Error opening matrix.txt\n");
        return 1;
    }

    fscanf(fptr, "%d %d", &m, &n);


    int sums[m];


    for (i = 0; i < m; i++) {
        sum = 0;
        for (j = 0; j < n; j++) {
            fscanf(fptr, "%d", &element);
            sum += element;
        }
        sums[i] = sum;
    }
    fclose(fptr);


    fptr = fopen("matrix.txt", "a");
    fprintf(fptr, "\n"); 

    for (i = 0; i < m; i++) {

        fprintf(fptr, "Sum of the row %d is %d\n", i + 1, sums[i]);
    }

    fclose(fptr);
    return 0;
}
