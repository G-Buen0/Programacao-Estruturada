#include<stdio.h>

int quantidade_substring(char *string1, char *string2){
    int tam_string1, tam_string2, verficador = 0, i, j;
    int ascii1, ascii2;
    
    tam_string1 = sizeof(string1);
    tam_string2 = sizeof(string2);

    if (tam_string2 != tam_string1){
        return verficador;
    }
    i = 0;
    j = 0;

    while(string1[i] != '\0'){
        ascii1 = string1[i];
        ascii2 = string1[j];
        if(ascii1 != ascii2 && ascii1 != ascii2 + 32 && ascii2 != ascii1 + 32 && ascii1 != ascii2 - 32 && ascii2 != ascii1 -32){
            return verficador;
        }else{
            i++;
            j++;
        }
            
    }
        
    

    verficador = 1;
    return verficador;
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