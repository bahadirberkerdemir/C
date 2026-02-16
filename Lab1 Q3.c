#include <stdio.h>

int main(){
	float h, l, area, circ;
	
	printf("Enter measures for height and length of a rectangle: ");
	scanf("%f %f",&h,&l);

	area = h * l;
	circ = 2 * (h + l);
	
	printf("\n\nCircumference of this rectangle: %f\nArea of this rectangle: %f",circ,area);

	return 0;
}
