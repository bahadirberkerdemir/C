#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h>
#include<string.h>

void SetColor(int);
void clearLastLine();

int main(){
FILE *fptr;
char word[32], guess[32];
int wordCount=0, selectedIndex, currentIndex=0, gamelost=0;

fptr = fopen("words.txt", "r");
if (fptr == NULL) {
    printf("Error: words.txt couldnt be found in the same folder with .c file...\n");
    return 1;        
}


srand(time(NULL));

while (fscanf(fptr, "%s", word) != EOF) {
        wordCount++;
}

rewind(fptr);

selectedIndex = rand() % wordCount;

while (fscanf(fptr, "%s", word) != EOF) {
        if (currentIndex == selectedIndex) {
            break;
        }
        currentIndex++;
    }


//printf("%s",word);   // prints the word to check			 

int L;
L=strlen(word);
int attempts,i,j,trueIndex[L],reds[L];

	
for(i=0;i<L;i++) {
	reds[i]=-1;trueIndex[i]=-1;
	}

for(attempts=5;attempts>0;){
	int isUpper=1, isTrue=1;
	
	
	printf("\nWord:");
	for(i=0;i<L;i++){
		
		if(trueIndex[i]==1){
			SetColor(10);
			printf(" %c",word[i]);
			SetColor(7);
		}
		else if(reds[i]==0){
			SetColor(12);
			printf(" %c",guess[i]);
			SetColor(7);
		}
		else 
			printf(" _");
	}
		
		
	for(i=0;i<L;i++)
		reds[i]=-1;
	
	
	printf("\n%d. Guess: ",6-attempts);
	isUpper=1;
	scanf("%s", guess);

	for(i=0;i<strlen(guess);i++){ 
		if(guess[i]>'Z' || guess[i]<'A'){
			isUpper=0;
			break;
		}
	}
		

	if(strlen(guess)==strlen(word)&& isUpper){
		for(i=0;i<L;i++){
			if(guess[i]!=word[i]){
				isTrue=0;
				for(j=0;j<L;j++){
					if(guess[i]==word[j]){
						reds[i]=0;
						break;				
					}

				}
			}
			else{
				trueIndex[i]=1;
			}
		}
	}
		
	else{
		clearLastLine();
		clearLastLine();
	}
		

	if(isUpper && strlen(word)==strlen(guess)){
		if(isTrue){
			printf("\nWord: ");
			SetColor(10);
			puts(guess);
			printf("\n\n Bravo! You found the word on your %d attempt.",6-attempts);
			SetColor(7);
			break;
		}
		else
			attempts--;		
	}

}

if(attempts==0){
	printf("\nWord: ");
		for(i=0;i<L;i++){
		if(trueIndex[i]==1){
			SetColor(10);
			printf(" %c",word[i]);
			SetColor(7);
		}
		else 
			printf(" _");
	}
	
	SetColor(12);
	printf("\n\n Unfortunately, you've ran out of guesses.");
	SetColor(7);
}

fclose(fptr);
return 0;
}
	
	

void SetColor(int color) {
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);


}
// 10 for green, 12 for red, and 7 for the default terminal color
void clearLastLine() {
HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
CONSOLE_SCREEN_BUFFER_INFO csbi;
DWORD written;

GetConsoleScreenBufferInfo(hConsole, &csbi);

COORD pos;
pos.X = 0;
pos.Y = csbi.dwCursorPosition.Y - 1;

FillConsoleOutputCharacter(hConsole, ' ', csbi.dwSize.X, pos, &written);
SetConsoleCursorPosition(hConsole, pos);
 }
