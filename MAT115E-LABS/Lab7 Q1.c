#include<stdio.h>

int main(){
	int n;
	printf("Enter the length of the array: \n");
	scanf("%d",&n);
	
	int count,i,j,x[n];
	
	printf("Enter the element(s) of the array:\n");
	for(i=0;i<n;i++)
		scanf("%d",&x[i]);
	
	for(i=0;i<n;i++){
		for(j=0;j<i;j++){
			if(x[j]==x[i])
				break;
			
		}
			
	if(i==j)
		count++;
	}
	
	
	printf("There are %d distinct element(s) in the array...",count);
	
	
	
	return 0;
}
