#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
	int x[12], a[3][4], i, j, p_sum=0, n_sum=0, c_odd=0, c_even=0;
	srand(time(NULL));
	
	for(i=0;i<12;i++){
		x[i] = -20 + (rand() % 41); //oluştur
		if(x[i]<0) n_sum+=x[i]; //toplamalar
		else if(x[i]>0) p_sum+=x[i];
		
		if(x[i]%2==0) c_even++; //tek çift
		else c_odd++;
		
		a[i/4][i%4] = x[i];
		printf("%4d\t",x[i]);
		if ((i + 1) % 4 == 0) printf("\n");
	}
	
	

	printf("\n\nSum of negative numbers: %d ,sum of positive numbers: %d",n_sum,p_sum);
	printf("\n\nNumber of odd numbers:%d, Number of even numbers:%d",c_odd,c_even);


	
	
	
	
	return 0;
}
