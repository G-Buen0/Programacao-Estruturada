#include<stdio.h>
#include<math.h>
int main(void){
    int num;
    printf("Digite o numero:\n");
    scanf("%d", &num);
    if (num< 2){
        printf("Não temos primos nessa faixa\n");
        return 0;
    }
    int vet[num], i, j, cont=0;
    for (i=0; i<=num; i++){
        vet[i] = i;
    }
    for (i=0; i<=num; i++){
        if((vet[i]==0) || (vet[i]==1)){
            vet[i] = -1;
        }else{        
            for(j=2; j<=sqrt(vet[i]); j++){
                if ((vet[i]%j)==0){
                    vet[i] = -1;
                }
            }

        }
            
    }
    for (i=0; i<=num; i++){
        if (vet[i]!= -1){
            printf("%d\n", vet[i]);
            cont += 1;
        }
        
    }
    printf("Existem %d primos\n", cont);
    
    return 0;
}