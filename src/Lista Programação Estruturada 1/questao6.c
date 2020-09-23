#include<stdio.h>
int main(void){
    char va[100], vb[100];
    scanf("%s", &va);
    scanf("%s", &vb);
    int i =0, j = 0, v2 = 0, v3 = 0;
    while(va[i] != '\0'){
        
        //Verifica quantas vezes o algarismo va aparece em vb e armazena em v2.
        while(vb[j] != '\0'){
            if(va[i] == vb[j]){
                v2 ++;
            }
            j++;
        }
        
        j = 0;
        
        //Verifica quantas vezes o algarismo de va aparece em va e armazena em v3.
        while(va[j] != '\0'){
            if(va[i] == va[j]){
                v3 ++;
            }
            j++;
        }
        
        //Se a quantidade de vezes que o algarismo aparece em va é diferente da quantidade de vezes que esse algarismo aparece em vb, é porque não é uma permutação.
        if(v2 != v3){
            printf("Nao\n");
            return 0;
        }
        
        j = 0;
        i++;

    }
    printf("Sim\n");
   
    
    return 0;

}