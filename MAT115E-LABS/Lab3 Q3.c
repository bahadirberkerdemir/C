#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
	double a,A1,A2,b1,b2,B1,B2,c1,c2,C1,C2,delta_c2;
	b1 = 180; b2 = 165; c1 = 115; A1 = 120; A2=100;
	
	a = sqrt(pow(b1,2)+pow(c1,2)-2*b1*c1*cos(A1*M_PI/180));
	printf("The length of side a: %.2lf",a);
	
	delta_c2 = pow((-2*b2*cos(A2*M_PI/180)),2) - 4*(pow(b2,2)-pow(a,2));
	
	c2 = (2*b2*cos(A2*M_PI/180) + sqrt(delta_c2))/2;
	printf("\n\nThe length of side c2: %.2lf",c2);
	
	C2 = asin(sin(A2*M_PI/180)*c2/a);
	printf("\n\nThe angle C2 is %.2lf radians.",C2);
	
	
	
	
	

	
	
	return 0;
}
