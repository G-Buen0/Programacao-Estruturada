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
no *insereNo(no *L, int elem, no *pre){
    
    no *aux;

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
    
    }
    return L;
}

// Função que imprime 

void imprimeLista(no *l){

    printf("\n\n Lista:\t");
    while (l != NULL){
        printf("%d\t", l->info);
        l = l->prox;
    }
    printf("\n\n");
    
}

// Função que mostra a união entre duas listas encadeadas
void uniao(no *l1, no *l2){
    no *l3, *pre;
    l3 = NULL;

    while(l1 != NULL){
        if(!busca(l3, l1->info, &pre)){
            l3 = insereNo(l3, l1->info, pre );
        }
        l1 = l1->prox;
    }

    while(l2 != NULL){
        if (!busca(l3, l2->info, &pre)){
            l3 = insereNo(l3, l2->info, pre);
        }     
        l2 = l2->prox;
    }
    imprimeLista(l3);
}

// Função interseção

// Função principal
int main(void){
    
    no *l1,*l2, *pre ;
    int elem, menu, pertence, verificador_pertence, verificador_pertence2;
    
    l1 = NULL;
    l2 = NULL;
    printf("Digite um número para inserir na lista 1:");
    scanf("%d", &elem);

    while(elem >=0){
        l1 = insereNo(l1, elem, pre);
        printf("Digite um número para inserir na lista:");
        scanf("%d", &elem);
    }

    printf("Digite um número para inserir na lista 2:");
    scanf("%d", &elem);

    while(elem >=0){
        l2 = insereNo(l2, elem, pre);
        printf("Digite um número para inserir na lista:");
        scanf("%d", &elem);
    }
    imprimeLista(l1);
    imprimeLista(l2);
    
    printf("1 -UNIAO\n ");
    printf("2 -INTERSECAO\n ");
    printf("3 -PERTENCE\n ");
    printf("4 -FIM \n");

    scanf("%d", &menu);

    while(menu != 4){
        if(menu == 1){
            uniao(l1, l2);
        }else if(menu == 2){

        }else if(menu == 3){
            printf("Digite o elemento que deseja ver se pertence:\n");
            scanf("%d", &pertence);
            verificador_pertence = busca(l1, pertence, &pre);
            verificador_pertence2 = busca(l2, pertence, &pre);
            if(verificador_pertence == 1 && verificador_pertence2 == 1){
                printf("O numero %d pertence a lista 1\n", pertence);
                printf("O numero %d pertence a lista 2\n", pertence);
            }

        }
        scanf("%d", &menu);
    }
    return 0;
}











