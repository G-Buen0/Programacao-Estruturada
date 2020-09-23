#include<stdio.h>
#include<stdlib.h>

void selecao(int *vet, int n){

    int i, c,verificador, i2 = 0;

    verificador = 0;
    while (verificador != 1){

        verificador = 1;
        for (i = 0; i<(n-1); i++) {
                
            if (vet[i]>vet[i+1]){
                c = vet[i];
                vet[i] = vet[i+1];
                vet[i+1] = c;
                verificador = 0;
            }
        }
    }
}

int * ordena(int *vet , int n){
    
    int *copia = (int *) malloc(sizeof(int) * n);
    int i;
    for(i = 0; i<n; i++){
        copia[i] = vet[i];
    }
    selecao(copia, n);
    return copia;
}

int main(void){

    int n;
    scanf("%d", &n);

    if(n<=0){
        printf("Nao eh possivel\n");
        return 0;
    }

    int vetor[n], i, k;
    for (i = 0; i<n; i++){
        scanf("%d", &vetor[i]);
    }

    int *resp = ordena(vetor, n);

    for (k = 0; k<n; k++){
        printf("%d\t%d", resp[k], vetor[k]);
        printf("\n");
    }
    free(resp);
    return 0;

}