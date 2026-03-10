#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
	char c1,c2,c3;
	float hm;
	int tf;
	
	printf("Enter the first character: ");
	c1 = getchar();
	getchar();
	printf("\n\nEnter the second character: ");
	c2 = getchar();
	getchar();
	printf("\n\nEnter the third character: ");
	scanf("%c", &c3);
	
	hm = 2.0/((1.0/c1)+(1.0/c3));
	tf = (hm>c2 && c2>100);

	printf("\n\nIs hm(%c, %c) > %c and ASCII of %c greater than 100 : %d ",c1,c3,c2,c2,tf);
	
	
	
	return 0;
}
