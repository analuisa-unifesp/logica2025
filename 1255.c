#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main () {
    int N;
    scanf("%d",&N);
    getchar();

    while (N--) {
        char linha[201];
        int freq[26] = {0};

        fgets(linha, sizeof(linha), stdin);

        for (int i=0; linha[i] != '\0';i++) {
            if (isalpha(linha[i])) {
                char letra = tolower(linha[i]);
                freq[letra - 'a']++;
            }
        }

        int maxFreq=0;
        for (int i= 0; i< 26; i++) {
            if (freq[i] > maxFreq)
                maxFreq = freq[i];
        }

        for (int i= 0; i <26; i++) {
            if (freq[i] == maxFreq)
                printf("%c", 'a' + i);
        }

        printf("\n");
    }

    return 0;
}

