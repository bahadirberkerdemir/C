#include <stdio.h>
#include <math.h>
#include "ANALYSE.h"

	/*I have plans to make users define  f(x)*/


/*
int func(int x){
	int func_select1, func_select2, a, x0, x1, x2, x3, x4, x5;

	printf("Select the function to work on:\n");
	printf("--- 1) Trigonometric Functions\n-");
	printf("--- 2) Polynomal Function\n");
	scanf("%d",&func_select1);
	
	
	if(func_select1 == 1){
		printf("--- 1) sin(x)\n-");
		printf("--- 2) cos(x)\n");
		printf("--- 3) tan(x)\n");
		printf("--- 4) cot(x)\n");
		printf("--- 5) sec(x)\n-");
		printf("--- 6) cosec(x)\n");
		scanf("%d", &func_select2);
		if(func_select2 == 1){
			return 11;
		}
		if(func_select2 == 2){
			return 12;
		}
		if(func_select2 == 3){
			if(cos(x) == 0){
				printf("tan(x) is not defined at this point!");
				return 0;
			}
			else{
				return 13;
			}
		}
		if(func_select2 == 4){
			if(sin(x) == 0){
				printf("cot(x) is not defined at this point!");
				return 0;
			}
			else{
				return 14;
			}
		}
		if(func_select2 == 5){
			if(cos(x) == 0){
				printf("sec(x) is not defined at this point!");
				return 0;
			}
			else{
				return 15;
			}
		}
		if(func_select2 == 6){
			if(sin(x) == 0){
				printf("cosec(x) is not defined at this point!");
				return 0;
			}
			else{
				return 16;
			}
		}
	}
	if(func_select1 == 2){
		printf("ax5 + bx4 + cx3 + dx2 + ex1 + f fill by order: ");
		scanf("%d %d %d %d %d %d",&x5,&x4,&x3,&x2,&x1,&x0);
		return 21;
	}


} 
*/

double f(double x){
	return pow(x,3)-2*pow(x,2)+5*x-8;
}

double lim(double a){
	double h = 1e-14;
	float lim1 = f(a+h), lim2 = f(a-h), val = f(a);
	
	 /*printf("%f\n%f\n%f\n",lim1,lim2,val); */
	
	
	if(lim1 == lim2 && lim1 == f(a) && lim2 == f(a)){
		printf("This function is continuous at x=%.2f\n", a);
		printf("Answer of this limit: %.2f", lim1);
		return lim1;
	}
	else{
		if(lim1 == lim2 && lim1 != val && lim2 != val){


			printf("This function has REMOVABLE disc. at x=%.2f\n", a);
			printf("Answer of this limit: %.2f", lim1);
			return lim1;
		}
		if((lim1 == f(a) && lim2 != val) || ((lim2 == val && lim1 != val))){

			printf("This function has JUMP disc. at x=%.2f\n", a);
		}
	}

	if(lim1!=lim2){
		printf("This function does not have a limit at this point...");
		return 0;
		
	}
	
	

	
}
double dydx(double b){
	double h = 1e-14, a, der;
	float lim1 = f(a+h), lim2 = f(a-h);
	
	if(lim1 == lim2 && lim1 == f(a) && lim2 == f(a)){
		der = ((f(b+h)-f(b))/h);
		printf("Answer of f'(%.2f) = %.2f",b,der);
		return der;
	}
	else{
		printf("This function cannot be diffable...");
		return 0;
	}
	

}

