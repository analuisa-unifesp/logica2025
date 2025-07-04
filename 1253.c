#include <stdio.h>
#include <string.h>

int main() {
    int N;
    scanf("%d",&N);
    getchar();
    
    for(int i=0;i<N;i++) {
        char mensagem[51];
        int deslocamento;
        
        fgets(mensagem, sizeof(mensagem), stdin);
        
        int tam = strlen(mensagem);
        if (mensagem[tam - 1]=='\n') {
            mensagem[tam - 1] = '\0';
        }
    
        scanf("%d",&deslocamento);
        getchar();
        
        for(int j=0;mensagem[j] != '\0'; j++){
            mensagem[j]=(mensagem[j] - 'A' - deslocamento + 26) % 26 + 'A';
        }
    
        printf("%s\n", mensagem);
    }
    
    return 0;
    
}
