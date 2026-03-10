#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int isAlphabet(char c){
	if(('a' <= c && c <= 'z') || ('A' <= c && c<= 'Z'))
		return 1;
	else
		return 0;
}

int main(){
	srand(time(NULL));
	char ch;
	ch = 32 + rand() % 95;
	printf(" %c is alphabet or not: %d", ch,isAlphabet(ch));
	return 0;
}
