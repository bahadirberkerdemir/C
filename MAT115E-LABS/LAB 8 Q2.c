#include<stdio.h>

int main(){
	int x=40, *p1=&x, y=0, *p2=&y, *temp=0;
	printf("x=%d, y=%d, *p1=%d, *p2=%d\n", x,y,*p1,*p2);
	

	temp=p1;
	p1=p2;
	p2=temp;
	printf("x=%d, y=%d, *p1=%d, *p2=%d", x,y,*p1,*p2);	
	
	return 0;
}
