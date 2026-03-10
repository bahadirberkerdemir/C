#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
	double a=5,b=7,c,gamma=55,alpha,beta, beta_d, alpha_d;
	gamma=gamma*M_PI/180;
	
	c = sqrt(pow(a,2) + pow(b,2) - 2*a*b*cos(gamma));
	printf("c is %.2lf cm.",c);
	
	alpha = asin(a*sin(gamma)/c);
	beta = asin(b*sin(alpha)/a);
	
	beta_d = beta*180/M_PI;
	alpha_d = alpha*180/M_PI;
	
	printf("\nalpha is %.2lf degrees.\n",alpha_d);
	printf("beta is %.2lf degrees.\n",beta_d);
	
	printf("Is beta between pi/6 and pi/3  = %d", M_PI/6 < beta && beta < M_PI/3); 

	
	
	return 0;
}
