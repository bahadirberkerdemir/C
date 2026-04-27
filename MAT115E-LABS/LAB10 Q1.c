#include<stdio.h>

int search(int A[], int n, int element, int *iteration){
	int minIndex=0;
	int maxIndex=n-1;
	int middleIndex;
	*iteration=0;
	while(minIndex<=maxIndex){
		(*iteration)++;
		middleIndex=(maxIndex+minIndex)/2;
		
		if(element==A[middleIndex])
			return middleIndex;
		else if(element<A[middleIndex])
			maxIndex=middleIndex-1;
		else
			minIndex=middleIndex+1;
	}
	
	return -1;
	
}
int main(){
	int n=9, element, iteration, index;
	int A[]={1,3,5,7,9,11,13,15,17};
	printf("enter the element to be searched: \n");
	scanf("%d",&element);
	
	index=search(A,n,element,&iteration);
	
	if(index==-1)
		printf("The element is not intthe array.\n");
	else
		printf("The element is found in the index %d by %d iterations.",index,iteration);
	
	
	return 0;
}
