#include <stdio.h>
#include <math.h>
#include "shapes.h" 

float triangle(int x, int y, int z) {   
    if(x + y > z && z > fabs(x - y)) {
        float half_c = (x + y + z) / 2.0;
        float area = sqrt(half_c * (half_c - x) * (half_c - y) * (half_c - z)); 
        printf("The area of the triangle is %.2f\n", area);
        return area;
    } else {
        printf("This is not a triangle!..\n");
        return 0;
    }
}

float circle(int r) {   
    if(r > 0) {
        float area = M_PI * pow(r, 2);
        printf("The area of the circle is %.2f\n", area);
        return area;
    } else {
        printf("Radius cannot be negative!..\n");
        return 0; 
    }
}

int rect(int a, int b) {
    if(a > 0 && b > 0) {
        int area = a * b;
        printf("The area of the rectangle is %d\n", area);
        return area;
    } else {
        printf("Sides must be positive!..\n");
        return 0;
    }
}
