#include<stdio.h>
void trans_i_p(int *vet, int n){
    int i, j = 0, c;
    // Estrutura de Ordenação
    while(j==0){
        j=1;
        for(i=0; i<n-1; i++){
            // Se o número anterior for ímpar, troca a posição mantendo a ordem anterior.
            if((vet[i]%2 !=0) && (vet[i+1]%2==0) ){
                c = vet[i+1];
                vet[i+1] = vet[i];
                vet[i] = c;
                j = 0;
            }
        }
    }

}

int main(void){
    int i,num[20], n;
    scanf("%d", &n);
    for(i = 0; i<n; i++){
        scanf("%d", &num[i]);
    }
    trans_i_p(num, n);
    printf("O novo vetor é:\n");
    for(i = 0; i<n; i++){
        printf("%d\n", num[i]);
    }
    return 0;
}