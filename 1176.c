#include <stdio.h>

unsigned long long int fibonacci(int n){
    unsigned long long int fib[61];
    fib[0]=0;
    fib[1]=1;
    
    for(int i=2;i<=n;i++) {
        fib[i] = fib[i-1] + fib[i-2];
    }
    
    return fib[n];
}

int main() {
    int T,N;
    
    scanf("%d",&T);
    
    for(int i=0;i<T;i++) {
        scanf("%d",&N);
        printf("Fib(%d) = %llu\n", N, fibonacci(N));
    }
    
    return 0;
}
