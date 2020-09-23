#include<stdio.h>
#include<stdlib.h>

//Estrutura do Nó
struct no{
    int info;
    struct no *prox;
}typedef no;

//Função Busca
int busca(no *l, int elem, no **pre ){

    no *aux;

    (*pre) = NULL;
    aux = l;

    while(aux != NULL && elem> aux->info){
        (*pre) = aux;
        aux = aux->prox;
    }

    if (aux != NULL){
        
        if(aux->info == elem){
            return 1;
        }else{
            return 0;
        }
    }else{
        return 0;
    }
}

// Função que insere um elemento na lista 
no *insereNo(no *L, int elem){
    
    no *pre, *aux;

    if (!busca(L, elem, &pre)){
    
        aux = (no *)malloc(sizeof(no));
        aux->info = elem;
        if (L == NULL || pre == NULL){
            aux->prox = L;
            L = aux;
        }else{
            aux->prox = pre->prox;
            pre->prox = aux;
        }
    }else{

        printf("Elemento já existe")    ;
    }
    return L;
}

// Função que imprime 

void imprimeLista(no *l){

    printf("\n\n Lista:");
    while (l != NULL){
        printf("%d\t", l->info);
        l = l->prox;
    }
    printf("\n\n");
    
}

// Função principal
int main(void){
    
    no *l;
    int elem;
    
    l = NULL;
    printf("Digite um número para inserir na lista:");
    scanf("%d", &elem);

    while(elem >0){
        l = insereNo(l, elem);
        printf("Digite um número para inserir na lista:");
        scanf("%d", &elem);
    }
    imprimeLista(l);
    return 0;
}











