#include <stdio.h>

int main()
{
    double raio, area, n;
    
    scanf("%lf", &raio);
    
    n = 3.14159;
    
    area = n * (raio * raio);
    
    printf("A=%.4lf\n",area);
    
    return 0;
}
