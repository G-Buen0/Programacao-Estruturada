#include<stdio.h>
int main(void){
    int n, i;
    scanf("%d", &n);
    while(n>0){
        int vet, indice = 0, segundo_maior = -1, maior = -1;
        for(i = 0; i<n; i++){
                scanf("%d", &vet);
                if(vet>maior){
                    segundo_maior = maior;
                    maior = vet;
                    indice+=1;
                }

        }
        indice--;
        printf("%d\n", segundo_maior);
        printf("%d\n", indice);
        scanf("%d", &n);
        
    }
    return 0;
}