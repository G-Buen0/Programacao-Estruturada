#include<stdio.h>
void retira_inicio_n(char*s, int n){
    int i, j, k;
    // Realiza o processo n vezes
    for(i = 0; i<n; i++){
        k = 0;
        j = 1;
        // Sobrescreve um caracter pelo próximo no vetor
        while(s[j]!='\0'){
            s[k] = s[j];
            k++;
            j++;
        }
    }
}
int main(void){
    int cont, i,n;
    char string[30];
    scanf("%s", &string);
    scanf("%d", &n);
    // Conta quantos caracteres tem dentro do vetor
    cont = 0;
    i = 0;
    while(string[i]!='\0'){
        cont++;
        i++;
    }
    // Imprime erro se o usuário quiser apagar uma quantidade de caracteres maior do que existe
    if(n>cont){
        printf("erro\n");
        return 0;
    }

    retira_inicio_n(string, n);
    // Imprime o restante do vetor 
    cont = cont - n;
    for(i = 0; i<cont; i++){
        printf("%c",string[i] );
    }
    return 0;
    
}