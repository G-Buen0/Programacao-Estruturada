#include<stdio.h>

void codifica(char *str){
    int  i, v;
    i = 0;
    while(str[i] != '\0'){
        v = str[i];
        if (v >= 97 && v <= 122 ) {
            str[i] = '?';
        }
        i ++;
    }
}

int main(void){
    char nome[30];
    int i;
    scanf("%s", &nome);
    codifica(nome);
    i = 0;
    while (nome[i] != '\0'){
        printf("%c", nome[i]);
        i++;
    }
    
    return 0;
}