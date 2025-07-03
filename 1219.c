#include <stdio.h>
#include <math.h>

#define PI 3.14159265358979

int main() {
    double a,b,c;
    while(scanf("%lf %lf %lf",&a, &b, &c)==3) {
        double s = (a+b+c)/2.0;
        double area = sqrt(s*(s-a)*(s-b)*(s-c));
        double r = area/s;
        double R = (a*b*c)/(4.0*area);
        
        double girassois = PI*R*R - area;
        double violetas = area - PI*r*r;
        double rosas = PI*r*r;
        
        printf("%.4lf %.4lf %.4lf\n", girassois,violetas,rosas);
    }
    return 0;
}
