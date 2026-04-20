#include <stdio.h>
#include <stdlib.h>

int main(){
	int N,i,*arr;
	float sumFirst=0.0, sumExtended,averFirst,averExtended;
	
	printf("Enter the size of the array:\n");
	scanf("%d",&N);
	
	arr=(int *)malloc(N* sizeof(int));
	if(arr==NULL){
		printf("Memory allocation failed.\n");
		return 1;
	}
	
	for(i=0;i<N;i++){
		if(i%2==0)
			arr[i]=(19*i+73)%N;
		else
			arr[i]=(13*i+94)%N;
			
		sumFirst += arr[i];
	}
	
	averFirst=sumFirst/N;
	
	printf("The first array:");
	for(i=0;i<N;i++)
		printf("%d ",arr[i]);
		
	printf("\nAverage of the first array: %f",averFirst);
	
	arr=(int *)realloc(arr,2*N*sizeof(int));
	if(arr==NULL){
		printf("Memory allocation failed.\n");
		return 1;
	}
	sumExtended=sumFirst;
	for(i=N;i<(2*N);i++){
		if(i%2==0)
			arr[i]=(7*i+119)%(2*N);
		else
			arr[i]=(11*i+29)%(2*N);
			
		sumExtended += arr[i];
	}	
	
	averExtended=sumExtended/(2*N);
	
	printf("\n\nThe extended array:");
	for(i=0;i<(2*N);i++)
		printf("%d ",arr[i]);
		
	printf("\nAverage of the first array: %f",averExtended);
	
	if(averFirst>averExtended) printf("\n\nArray has maximum average before expanded");
	else printf("\n\nArray has maximum average after expanded");
	
	free(arr);
	return 0;
}
