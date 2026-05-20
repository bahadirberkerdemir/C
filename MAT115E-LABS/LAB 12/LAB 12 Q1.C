#include<stdio.h>
#include<ctype.h>

int comparison(char s1[], char s2[], char type[]){
	int i=0, caseSensitive;
	
	if(type[0]=='c' && type[5]=='s')
		caseSensitive=1;
	else
		caseSensitive=0;
	
	while(s1[i]!='\0' && s1[i]!='\n' && s2[i]!='\0' && s2[i]!='\n'){
		if(caseSensitive){
			if(s1[i]!=s2[i]) return 0;
		
		}
		else{
			if(tolower(s1[i])!=tolower(s2[i])) return 0;
		}
		i++;
	}
	if((s1[i]=='\0' || s1[i]=='\n') && (s2[i]=='\0' ||s2[i]=='\n'))
		return 1;
		
	return 0;
}

int main(){
	FILE *f1,*f2,*f3,*result;
	char str1[100],str2[100],type[100];
	
	f1=fopen("str1.txt","r");
	f2=fopen("str2.txt","r");
	f3=fopen("comparison_type.txt","r");
	result=fopen("result.txt","w");
	
	while(fgets(str1,100,f1)!=NULL && fgets(str2,100,f2)!=NULL && fgets(type,100,f3)!=NULL){
		if(comparison(str1,str2,type)==1)
			fprintf(result,"Equal.\n");
		else
			fprintf(result,"Not Equal.\n");
	}
	fclose(f1);
	fclose(f2);
	fclose(f3);
	fclose(result);
	
	return 0;
}
