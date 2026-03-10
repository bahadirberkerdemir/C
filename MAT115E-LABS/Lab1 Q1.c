#include <stdio.h>

int main(){
	float A,B;
	
	printf("Enter the measure A: ");
	scanf("%f", &A);
	
	B = (20 - A) * 2.3 + 54 * A;
	
	printf("%f A is equal to %.2f B.",A, B);
	
	return 0;
}
