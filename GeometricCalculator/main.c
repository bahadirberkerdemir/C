#include <stdio.h>
#include <math.h>
#include "shapes.h" 

int main(){
	int n1, n2, n3, shape_no;
	
	printf("Please select which shape to find the area of:\n1-Triangle\n2-Circle\n3-Rectangle\nElse will end the program\n\nPlease Type: ");
	scanf("%d", &shape_no);
	
	if(shape_no<=3 && shape_no>=1){
	
	
		if(shape_no == 1){
	
			printf("Please enter 3 integers for the sides of the triangle: ");
			scanf("%d %d %d", &n1, &n2, &n3);
	
			triangle(n1,n2,n3);
		
		}
		if(shape_no == 2){
			printf("Please enter an integer for the radius: ");
			scanf("%d", &n1);
		
			circle(n1);
		
		

		}	
		if(shape_no == 3){
			printf("Please enter two integers for the sides of the rectangle: ");
			scanf("%d %d", &n1, &n2);
		
			rect(n1,n2);
		
		
		}
	}
	else{
		return 0;
	}	
	
	
	return 0;
}

