#include<stdio.h>
#include<string.h>
#define M 100

void revString(char *st){
	int i=0, N=strlen(st);
	char temp;
	for(i;i<N/2;i++){
		temp=st[i];
		st[i] =st[N-(i+1)];
		st[N-(i+1)]=temp;
	}
}

int main(){
	char s[M];
	printf("Enter a string:  ");
	scanf("%s",s);
	
	printf("\nBefore: %s\n",s);

	
	revString(s);
	
	printf("After: %s",s);
	
	return 0;
}
