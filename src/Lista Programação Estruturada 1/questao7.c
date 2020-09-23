#include<stdio.h>
int main(void){
    
    int num[20];
    int n, i, j, z, cont = 10, k, palind;
    
    scanf("%d", &n);
    while (n>=0){
    
        i = 0;
        k = 0;
        j = 0;
        palind = 1;
        
        //Pega o número inteiro de entrada e o separa em algarismos em um vetor de inteiros.
        while ((n/cont>0) || (n%cont>0)){
            num[i] = n%cont;
            n = n/cont;
            i++;
            //Conta a quantidade de algarismos que o número de entrada possui.
            k++; 
        }

        //Compara se as posições complementares no vetor possuem o mesmo algarismo(EX: num[0] == num[4], num[1] == num[3]... para um número de 5 algarismos.).
        z = k-1;
        for(i = 1; i <= k/2; i++ ){
            if(num[j] != num[z]){
                palind = 0;
            
            }
            j++;
            z--;
        }
        
        //Verifica se palind recebe verdadeiro ou falso.
        if(palind != 1){
            printf("Falso\n");
        }else{
            printf(" Verdadeiro\n");
        }
        
        scanf("%d", &n);
    }
    
    return 0;
}