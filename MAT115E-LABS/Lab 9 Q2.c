#include <stdio.h>
#include <stdlib.h>

int main() {
    int initial_count, additional_count, total_count,i,above_avg_count = 0,below_avg_count = 0,*grades, max, min;
    float sum = 0.0, average;


    printf("Enter the initial number of students: ");
    scanf("%d", &initial_count);

    grades = (int *)malloc(initial_count * sizeof(int));
    if (grades == NULL) {
        printf("Memory allocation failed!\n");
        return 1; 
    }


    for (i = 0; i < initial_count; i++) {
        printf("Enter grade for student %d: ", i + 1);
        scanf("%d", &grades[i]);
    }


    printf("\nHow many additional student grades will be added? ");
    scanf("%d", &additional_count);


    total_count = initial_count + additional_count;


    grades = (int *)realloc(grades, total_count * sizeof(int));
    if (grades == NULL) {
        printf("Memory reallocation failed!\n");
        return 1;
    }


    for (i = initial_count; i < total_count; i++) {
        printf("Enter grade for additional student %d: ", i + 1);
        scanf("%d", &grades[i]);
    }


    printf("\n --- Results ---\n\n");


    printf("All grades: ");
    for (i = 0; i < total_count; i++) {
        printf("%d ", grades[i]);
        sum += grades[i];


        if (i == 0) {
            max = grades[i];
            min = grades[i];
        } else {
            if (grades[i] > max) max = grades[i];
            if (grades[i] < min) min = grades[i];
        }
    }
    printf("\n\n");


    average = sum / total_count;
    printf("Average: %.2f\n\n", average);

	printf("Grades greater than the class average: ");
    for (i = 0; i < total_count; i++) {
        if (grades[i] > average)
		 { printf("%d ",grades[i]);
            above_avg_count++;
        }
    }
    printf("\nNumber of grades greater than the class average: %d\n\n", above_avg_count);
    
    printf("Grades lower than the class average: ");
    for (i = 0; i < total_count; i++) {
        if (grades[i] < average)
		 { printf("%d ",grades[i]);
            below_avg_count++;
        }
    }
    printf("\nNumber of grades lower than the class average: %d\n", below_avg_count);



    printf("\nHighest grade: %d\n", max);
    printf("Lowest grade: %d\n", min);


    free(grades);

    return 0;
}
