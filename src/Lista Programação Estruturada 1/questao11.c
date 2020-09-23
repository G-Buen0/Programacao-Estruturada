#include<stdio.h>

void shift_troca_string(char *str){
    int i, v;
    i = 0;
    while(str[i] != '\0'){
        v = str[i];
        
        if (v >= 65 &&  v <= 90){
            v--;
            if(v == 64){
                v = 90;
            }
            v +=  32;

        }else if(v >= 97 && v<=122){
            v--;
            if (v == 97){
                v = 122;
            }
            v -= 32;
        }else if (v < 65 || v>122){
            v = 33;
        }
        str[i] =  v;
        i++;
    }
    
}

int main(void){
    char nome[20] ;
    int i;
    scanf("%s", &nome);
    shift_troca_string(nome) ;
    i = 0;
    while (nome[i] != '\0'){
        printf("%c", nome[i]);
        i ++;
    }
    return 0;
}