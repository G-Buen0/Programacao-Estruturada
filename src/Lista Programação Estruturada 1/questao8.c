#include<stdio.h>

int main(void){
    
    int n, num[20], i, j, cont;
    
    scanf("%d", &n);
    while (n>=0)
    {
        i = 0;
        cont = 0;
        //Realiza divisões sucessivas de n pela base binária. Com isso os restos são armazenados de trás para frente no vetor de inteiros e n é atualizado da divisão inteira de n por 2.
        while (n>=1){
            
            num[i] = n%2;
            n = n/2;
            i++;
            cont ++;
        }
        
        //Percorre o vetor de inteiros de trás para frente com o objetivo de concatenar os valores de trás para frente.
        for(j = cont-1; j>=0; j--){
            printf("%d", num[j]);
        }
        
        printf("\n");
        scanf("%d", &n);
    }
    return 0;
}