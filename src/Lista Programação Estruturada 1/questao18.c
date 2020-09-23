#include<stdio.h>

int quantidade_substring(char *string, char *substring){
    int cont = 0, s = 0, sub, verificador = 0;

    // Enquanto a string não chega no final
    while(string[s] != '\0' && verificador != 1){
        sub = 0;

        // Enquanto a segunda string não chega no final
        while(substring[sub] != '\0' && verificador != 1){
            
            // Se a substring, por ter tido seu índice zerado para voltar ao início, não chegar ao fim, 
            // mas a string chegar, sai do loop, já que terminou de ler a string.
            if(string[s] == '\0'){
                verificador = 1;
            }

            // Se os caracteres forem iguais, os dois são incrementados
            if(string[s] == substring[sub]){
                s++;
                sub++;

                // Se passou por todos os caracteres da substring é porque essa substring está na string.
                // Sendo assim, o contador recebe 1
                if(sub == sizeof(substring) - 1){
                    cont = 1;
                    return cont;
                }

            }else{
                // Se os caracteres forem diferentes, e o próximo caractere da string for diferente do primeiro
                // da substring, somente a string é incrementada, enquanto que a substring volta ao início
                if (string[s] != substring[0]){
                    s++;
                    sub = 0;
                }

                // Se os caracteres forem diferentes, mas o próximo caractere da string for igual ao primeiro
                // da substring, a substring volta ao início e a string permanece onde estava
                else{
                   sub = 0;
                }
            }   
        }
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