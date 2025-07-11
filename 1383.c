#include <stdio.h>

int main() {
    int n, m[9][9];

    scanf("%d",&n);

    for(int t = 1; t <= n; t++) {
        
        for(int i = 0; i < 9; i++)
            for(int j = 0; j < 9; j++)
                scanf("%d", &m[i][j]);

        int valido = 1; 
      
        for(int i = 0; i< 9; i++) {
            int c[10] = {0}; 
            for(int j = 0; j < 9; j++)
                c[m[i][j]]++; 
            for(int k = 1; k <= 9; k++) {
                if(c[k] != 1) valido = 0; 
            }
        }

        for(int j = 0; j < 9; j++) {
            int c[10] = {0}; 
            for(int i = 0; i <9; i++)
                c[m[i][j]]++; 
            for(int k = 1; k <= 9; k++) {
                if(c[k] != 1) valido = 0;
            }
        }

        for(int linha = 0; linha < 9; linha += 3) 
            for(int coluna = 0; coluna < 9; coluna += 3) { 
                int c[10] = {0}; 
                for(int i = 0;i < 3; i++) 
                    for(int j = 0; j < 3;j++) 
                        c[m[linha+i][coluna+j]]++; 
                for(int k = 1; k <= 9; k++) {
                    if(c[k] != 1) valido = 0; 
                }
            }

        printf("Instancia %d\n",t);
        if(valido) printf("SIM\n"); 
        else printf("NAO\n");   
        printf("\n");
    }

    return 0;
}
