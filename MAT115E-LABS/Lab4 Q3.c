#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>


int formTriangle(int x, int y, int z){
	return x + y > z && fabs(x-y) < z;
}

int main(){
	int a,b,c;
	srand(time(NULL));
	a = 3 + rand() % 8;
	b = 3 + rand() % 8;	
	c = 3 + rand() % 8;
	printf("Lengths of wires: %d, %d, %d \n\nDo these wires form a triangle ? --> %d",a,b,c,formTriangle(a,b,c));
	return 0;
}



