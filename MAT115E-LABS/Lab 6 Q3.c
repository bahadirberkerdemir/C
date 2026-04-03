#include<stdio.h>
#include<math.h>

int isbn_f(long long);

int main(){
	long long isbn;
	
	printf("Enter an ISBN number \n");
	scanf("%lld",&isbn);
	
	isbn_f(isbn);
	
	
	
	
	return 0;
}

int isbn_f(long long n){
	int i, m, sum=0;
	m=n/10;
	
	for(i=1;i<11;i++){
	sum+=(m%10)*i;
	m/=10;
		
	}
	
	if (sum%10==n%10){
		printf("Valid");
		return 1;
}
	else{
		printf("Invalid");
		return 0;
	}
	
}
