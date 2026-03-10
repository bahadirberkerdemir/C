#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>


int hasMidpoint(int x, int y, int z){
	return (x+y) == 2*z || (x+z) == 2*y || (z+y) == 2*x ;
}


int main(){
	int a, b, c;	
	printf("Enter three integers: ");
	scanf("%d %d %d",&a,&b,&c);	
	printf("hasMidpoint: %d", hasMidpoint(a,b,c));	
	return 0;
}





