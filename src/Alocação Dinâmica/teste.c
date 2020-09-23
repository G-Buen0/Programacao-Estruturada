#include<stdio.h>
int main(void){

    int vet[10], i, verificador, c;
    
    for(i = 0; i<10; i++){

        scanf("%d", &vet[i]);
    }
    

    verificador = 0;
    while (verificador != 1){

        verificador = 1;
        for (i = 0; i<9; i++) {
                
            if (vet[i]>vet[i+1]){
                c = vet[i];
                vet[i] = vet[i+1];
                vet[i+1] = c;
                verificador = 0;
            }
        }
    }

    for (i = 0; i<10; i++){
        printf("%d\t", vet[i]);
    }
    return 0;
}