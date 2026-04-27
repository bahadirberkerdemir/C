#include <stdio.h>
#include <math.h>

double F(double x0, double y0, double *last_d) {
    double t = 0.0;
    double x, y, d;
    *last_d=0.00;
    
    x = 5 * t - 10;
    y = 25 * pow(t, 2) - 120 * t + 144;
    d = sqrt(pow(x - x0, 2) + pow(y - y0, 2));

    while (d >= 15.0) {
        *last_d = d;
        t += 0.01;
        x = 5 * t - 10;
        y = 25 * pow(t, 2) - 120 * t + 144;
        d = sqrt(pow(x - x0, 2) + pow(y - y0, 2));
    }
    

    
    return t;
}

int main() {
    double refX, refY;
    double resultDistance, resultTime;

    printf("Enter reference x0: ");
    scanf("%lf", &refX);
    printf("Enter reference y0: ");
    scanf("%lf", &refY);
    

    printf("\nThe last step immediately before the distance drops below 15 meters :\n");
    printf("Time: %.2f seconds\n", F(refX, refY, &resultDistance));
    printf("Distance: %.7f meters\n", resultDistance);

    return 0;
}


