#include<stdio.h>

int main(){
	int x=10,*y=&x,**z=&y;
	printf("x=%d,  *y=%d,  **z=%d\n",x,*y,**z);
	*y=20;
	printf("x=%d\n",x);
	**z=30;
	printf("x=%d",x);
	return 0;
}
