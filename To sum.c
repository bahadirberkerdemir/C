#include <stdio.h>
#include <stdlib.h>

int main(){
	int x, y, sum;
	
	printf("Enter a value for x and y: ");
	scanf("%d %d", &x, &y);
		
	sum = x + y;
	
	printf("\nx + y value for the given values is:\n%d + %d = %d",x,y,sum);
	
	exit(0);
	
}
