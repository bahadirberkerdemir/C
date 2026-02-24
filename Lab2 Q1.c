#include<stdio.h>
#include<stdlib.h>
#include<math.h>


int main(){
	char ch1,ch2;
	double gmean;
	
	printf("Enter the first character: ");
	scanf("%c", &ch1);
	
	getchar();
	printf("Enter the second character: ");
	ch2=getchar();
	
	gmean=sqrt(ch1*ch2);
	
	printf("Geometric mean of %c and %c is %.7f.",ch1,ch2,gmean);
	
	return 0;
}
