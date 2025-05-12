#include <stdio.h>
int main() {
    int cod1,cod2,num1,num2;
    double valor1,valor2,total;
    
    scanf("%d",&cod1);
    scanf("%d",&num1);
    scanf("%lf",&valor1);
    
    scanf("%d",&cod2);
    scanf("%d",&num2);
    scanf("%lf",&valor2);
    
    total = (num1 * valor1) + (num2 * valor2);
    
    printf("VALOR A PAGAR: R$ %.2lf\n",total);
    
    return 0;
    
}
