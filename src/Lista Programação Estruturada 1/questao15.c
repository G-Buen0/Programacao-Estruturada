#include<stdio.h>
void retira_fim_n(char*s, int n){
    int cont = -1,i = 0, j;
    // Conta quantos caracteres tem no vetor
    while(s[i]!='\0'){
        cont ++;
        i ++;
    }
    cont = cont - n;
    // Realiza o processo n vezes
    for(i=0; i<n; i++){
        // Com início no índice anterior ao primeiro caractere a ser removido, ocorre a troca do que será removido pelo anterior
        
        j = cont + 1;
        while(s[j]!='\0'){
            s[j] = s[cont];
            j++;
            cont++;
        }

    }
}
int main(void){
    
    int i, cont, n;
    char s[30];
    scanf("%s", &s);
    scanf("%d", &n);
    cont = 0;
    i = 0;
    while(s[i]!='\0'){
        cont++;
        i++;
    }
    if(cont<n){
        printf("erro\n");
        return 0;

    }
    retira_fim_n(s, n);
    cont = cont - n;
    for(i = 0;i<cont; i++){
        printf("%c", s[i]);

    }
    return 0;
}