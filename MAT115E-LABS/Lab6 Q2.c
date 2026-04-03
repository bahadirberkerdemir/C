#include<stdio.h>
#include<math.h>

float maclaurin(int, float);

int main(){
	int n; float x;
	
	printf("Enter the number of terms and a real x value: ");
	scanf("%d %f", &n,&x);
	
	printf("The value of exp(%f)=%f",x,maclaurin(n,x));

	return 0;
}


float maclaurin(int n, float x){
	int i;
	float term=1.0, sum=1.0;
	
	for(i=1;i<n;i++){
		term=term*x/i;
		sum+=term;
		
	}
	
	
	return sum;
}



