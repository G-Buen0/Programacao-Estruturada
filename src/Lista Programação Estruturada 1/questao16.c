#include<stdio.h>
int main(void){
    char string[20];
    scanf("%s", &string);
    int i = 0, cont = 0, num = 0, tb, maiuscula = 0, minuscula = 0, cd = 0;
    
    while(string[i]!='\0'){
        // Conta quantos caracte, maiuscula, minuscula, cdres tem em string
        cont++;

        // Verifica se possui número
        tb = string[i];
        if (tb>=48 && tb<=57){
            num = 1;
        
        // Verifica se possui letra maiúscula
        }else if (tb>=65 && tb<=90){
            maiuscula = 1;

        // Verifica se possui letra minúscula
        }else if(tb>=97 && tb<=122){
            minuscula = 1;
        
        // Verifica se possui outro tipo de caractere
        }else{
            cd = 1;
        }
        
        i ++;
    }
    if(cont>=8 && num==1 && maiuscula==1 && minuscula==1 && cd==1){
        printf("Boa senha\n");
    }else{
        printf("Senha ruim\n");
    }
    return 0;
}