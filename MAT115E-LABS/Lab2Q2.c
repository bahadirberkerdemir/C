#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
	char c1, c2;
	int mid;
	
	printf("Enter the first character: "); c1=getchar();
	getchar();
	
	printf("Enter the second character: "); c2=getchar();
	getchar();
	
	mid = (c1+c2)/2;
	
	printf("Middle of these characters is: %c", mid);
	
	return 0;
}
