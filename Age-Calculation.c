#include <stdio.h>

int main(){
	
	int year, age;
	
	printf("Enter your birth year: ");
	scanf("%d", &year);
	
	age = 2026 - year;
	
	printf("\n\n You are %d years old...\n", age);
	
	
	return 0;
}
