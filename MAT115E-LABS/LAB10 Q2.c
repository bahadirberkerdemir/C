#include<stdio.h>
#include<stdlib.h>

void car(int *color, int *id, int *price,int N){
	printf("Black cars under 30000 dollars\n\n");
	
	int i;
	
	for(i=0;i<N;i++){
	if(*(color+i)==0&&*(price+i)<30000){
		printf("%d\n",*(id +i));
	}	
  	}		 
   	  } 

int main(){
	int N=8;
	int color[]={0,1,2,1,2,0,1,0};
	int id[]={1002,2176,3201,4204,5512,6309,8841,9004};
	int price[]={24000,18000,36000,26000,35000,29000,31000,38000};
	
	car(color,id,price,N);
	return 0;
}


