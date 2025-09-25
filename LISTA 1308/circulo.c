#include <stdio.h>
#include <math.h>

int main() {
    double r, area;
    scanf("%lf", &r);
    area = M_PI * r * r;
    printf("AREA = %.3lf\n", area);
    return 0;
}
