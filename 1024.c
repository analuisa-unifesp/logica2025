#include <stdio.h>
#include <string.h>
#include <ctype.h>

void passada1(char*str) {
    for(int i = 0;str[i] != '\0'; i++) {
        if(isalpha(str[i])) {
            str[i] += 3;
        }
    }
}

void passada2(char*str) {
    int len = strlen(str);
    for(int i=0;i<len/2;i++) {
        char temp = str[i];
        str[i] = str[len - 1 - i];
        str[len - 1 - i] = temp;
    
    }
}

void passada3(char*str) {
    int len = strlen(str);
    int metade = len/2;
    
    for (int i = metade;i<len;i++) {
        str[i] -=1;
    }
}

int main() {
    int N;
    char linha[1001];
    
    scanf("%d", &N);
    getchar();
    
    for (int i=0;i<N;i++) {
        fgets(linha, 1001, stdin);
        linha[strcspn(linha, "\n")]='\0';
        
        passada1(linha);
        passada2(linha);
        passada3(linha);
        
        printf("%s\n",linha);
    }

    return 0;
}
