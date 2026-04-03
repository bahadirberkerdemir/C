#include<stdio.h>
#include<math.h>

int digitCount(int k, int d){
	
	if(k==0 && d==0)
		return 1;
	
	int count=0;
	
	while(k>0){
	if(k%10 == d)
		count++;
	k/=10;
	}
	
	return count;
}

int main(){
	int m,s;
	printf("Enter a non-negative number and a digit\n");
	scanf("%d %d",&m, &s);
	
	printf("The number of %d's in %d is %d", s,m,digitCount(m,s));
	
	return 0;
	
}
