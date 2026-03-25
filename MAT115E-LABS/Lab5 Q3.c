#include<stdio.h>

int theFunction(int);

int main(){
	int x;
	
	printf("Enter an integer: ");
	scanf("%d",&x);
	
	theFunction(x);

return 0;
}


int theFunction(int a){
	switch (a){
	case 4: printf("Four");break;
	case 5: printf("Five");break;
	case 6: printf("Six");break;
	default:
		if(a%2 == 0)
		printf("Even");
		else
		printf("Odd");
}
}
