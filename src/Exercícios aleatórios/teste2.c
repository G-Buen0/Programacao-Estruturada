#include<stdio.h>

int quantidade_substring(char *string, char *substring){
    int cont = 0, s = 0, sub, verificador = 0;
    while(string[s] != '\0' || verificador != 1){
        sub = 0;
        while(substring[sub] != '\0' || verificador != 1){
            if(string[s] == '\0'){
                verificador = 1;
            }
            if(string[s] == substring[sub]){
                s++;
                sub++;
            }else
            {
                s++;
                sub = 0;
            }
            
        }
        cont++;
    }
    return cont;
}

int main(void){
    char string[20], substring[20];
    int vezes;
    scanf("%s", &string);
    scanf("%s", &substring);
    vezes = quantidade_substring(string, substring);
    printf("%d", vezes);
    return 0;
}