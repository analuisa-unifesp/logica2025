#include <stdio.h>

int main(){
    int A,B,C,D, DIFERENCA, PROD1, PROD2;
    
    scanf("%d %d %d %d", &A, &B, &C, &D);
    
    PROD1 = A*B;
    PROD2 = C*D;
    DIFERENCA = PROD1 - PROD2;
    
    printf("DIFERENCA = %d\n", DIFERENCA);
    
    return 0;
    
}
