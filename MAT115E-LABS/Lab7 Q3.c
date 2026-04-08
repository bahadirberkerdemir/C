#include <stdio.h>
#include <stdlib.h>
#include <time.h>



int main() {
    int i, j, row, column, n;

    printf("Enter size : ");
    scanf("%d", &n);


    int a[n][n], t[n][n];
    int Symmetric = 1;

    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nTranspose of the matrix:\n");
    for (i=0; i<n; i++) {
        for (j = 0; j < n; j++) {
            t[i][j] = a[j][i];
            printf("%d ", t[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (a[i][j] != t[i][j]) {
                Symmetric = 0;
                break;
            }
        }
    }

    if (Symmetric==1) 
        printf("\nThe matrix is symmetric.\n");
    else 
        printf("\nThe matrix is not symmetric.\n");
    

    return 0;
}
