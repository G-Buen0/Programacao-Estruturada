#include<stdio.h>
#include<stdlib.h>

// Criando a estrutura de nó.
struct no{
    int dado;
    struct no *prox;
}typedef NO;

// Função que busca o elemento na lista encadeada
int busca(int elem, NO *ptr, NO **pre){

    // ptr é um ponteiro que recebe o ponteiro do nó vindo da função main
    NO * aux;

    (*pre) = NULL;
    aux = ptr;

    while (aux != NULL && elem > aux->dado){
        (*pre) = aux;
        aux = aux->prox;
    }

    if (aux != NULL){

        if(elem == aux->dado){
            // Se o elemento for igual ao elemento contido no nó que ja está na lista, retorna 1 para informar que já existe
            return 1;
        }else{
            return 0 ;
        }
        
    }else{
        return 0 ;
    }    
}

// Função que insero o elemento na lista encadeada
NO *insere(int elem, NO *l){

    NO *aux, *pre;
    int verificador;

    verificador = busca(elem, l, &pre);

    if(verificador == 1){
        printf("Elemento já existe\n");
    }else{
        aux = (NO *)malloc(sizeof(NO));
        aux->dado = elem;

        if(l == NULL || pre == NULL){
            aux->prox = l;
            l = aux;
        }else{
            aux ->prox = pre ->prox;
            pre->prox = aux;
        }
    }
    return l;
}

// Função que imprime a lista encadeada
void imprime(NO *l){

    printf("A lista:\n\n");
    while (l != NULL){
        printf("%d\t", l->dado);
        l = l->prox;
    }
}



// Função principal
int main(void){

    int elemento;
    NO *l;

    l = NULL;

    printf("Digite um número para inserir na lista:\n");
    scanf("%d", &elemento);
    while (elemento >= 0 ){
        l = insere(elemento, l);
        printf("Digite um número para inserir na lista:\n");
        scanf("%d", &elemento);
    }
    
    imprime(l);
    return 0 ;
}