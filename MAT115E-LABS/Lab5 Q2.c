#include<stdio.h>

void charType(char);

int main(){
	char ch1;
	
	printf("Enter a character: ");
	scanf("%c",&ch1);
	
	charType(ch1);
	
	
	
	return 0;
}


void charType(char c){
	if ((c>='a'&& c<='z') || (c>='A'&& c<='Z'))
	printf("%c is alphabet",c);
	else if (c>='0' && c<='9')
	printf("%c is number",c);
	else
	printf("%c is a special character",c);
}
