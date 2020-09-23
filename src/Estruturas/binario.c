#include<stdio.h>

#define max 100

struct PILHA
{
    int vet[max];
    int topo;

}typedef pilha;

void push(pilha *p, int elem){
    
    if (p->topo != max-1){

        p ->topo++;
        p->vet[p->topo] = elem;

    }
}

void pop(pilha *p, int *elem){

    if (p->topo >= 0){
        *elem = p->vet[p->topo];
        p->topo --;
    }
}

int main(void){

    pilha p;
    int num, resto;
    FILE *arq;
    arq = fopen("arquivo_binario.txt", "r");
    
    if (arq == NULL){
        printf("Erro");
        return 0;
    }
    
    p.topo = -1;
    /*printf("Digite um número:\n");*/
    while (!feof(arq)){
        
        fscanf(arq,"%d", &num);
        while(num != 0){
            resto = num % 2;
            push(&p, resto);
            num = num/2;
        }

        printf("O número em binário é:\n");

        while(p.topo != -1){
            pop(&p, &num);
            printf("%d", num);
        }
        printf("\n");
    }
    fclose(arq);
    return 0;
}