#include<stdio.h>

int main(){
	int n;
	printf("Enter range for square matrix:  ");
	scanf("%d",&n);
	int i,j,M[n][n], isLowerT=1;
	printf("Enter range for square matrix:  ");

	
	printf("Enter values for M[%d][%d]\n",n,n);
	
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%d",&M[i][j]);
			
		}	
	}
	
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(M[i][j]!=0){
				isLowerT = 0;
				break;
			}
			
		}	
	}
	
	if(isLowerT) printf("M[%d][%d] IS a lower triangular matrix.",n,n);
	else printf("M[%d][%d] is NOT a lower triangular matrix.",n,n);
		
	
	
	return 0;
}
