#include <stdio.h>
#include <stdlib.h>
#include "ANALYSE.h"
/*f(x) = pow(x,3)-2*pow(x,2)+5*x-8*/

int main() {
	int what;float value;
	
	printf("----- Welcome to basic calculus analyses! -----\n\n");
	printf("Select what to do for f(x) = x^3 - 2x^2 + 5x - 8");
	printf("\n\n  1- f(x)\n  2- Limit and Continuosity\n  3- Derivative at a point\n\n");
	scanf("%d", &what);
	
	if (what==1){
		printf("Enter a float value (12.00 for 12) for x:   ");
		scanf("%f", &value);
		
		printf("f(%.2f) = %.2f",value,f(value));
	}

	if (what==2){
		printf("Enter a float value (12.00 for 12) for x:   ");
		scanf("%f", &value);
		
		lim(value);
	}
	
	if (what==3){
		printf("Enter a float value (12.00 for 12) for x:   ");
		scanf("%f", &value);
		
		dydx(value);
	}
	
	if(what>3 || what<1){
		printf("You must've entered a value in [1,3]...'");
	}
	
	return 0;
	
}
