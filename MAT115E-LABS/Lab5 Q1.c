#include<stdio.h>

void triangleType(float,float,float);

int main(){
	float x,y,z;
	printf("Enter edge lenghts for a triangle: ");
	scanf("%f %f %f", &x,&y,&z);
	triangleType(x,y,z);
	
	return 0;
}

void triangleType(float a,float b,float c){
	
	if(a+b<c || b+c<a || a+c<b)
	printf("This is not a triangle!..");
	
	else if (a==b && a==c)
	printf("equilateral triangle");
	else if (a==b || a==c || b==c)
	printf("isosceles triangle");
	else
	printf("scalene triangle");	

}

