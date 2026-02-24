#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main(){
	char x, y;
	double magn;
	
	
	printf("Enter character point: ");
	scanf("(%c,%c)",&x,&y);
	
	magn = sqrt(pow(x,2)+pow(y,2));
	
	printf("Magnitude of the vector: %.8lf",magn);
	
	
	return 0;
}
