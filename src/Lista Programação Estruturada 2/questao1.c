#include<stdio.h>
#include<stdlib.h>

// Estrutura do nó
struct NO{

    int dado;// Atributo que guarda o número no nó.
    struct NO *prox;// Atributo que guarda o endereço do próximo nó.

}typedef no;


// Função que busca o elemento na lista
int busca(int elem, no *lista, no **pre){
    
    no *aux;// Criado para ser uma cópia da lista. Assim, o ponteiro lista não é retirado do início.

    (*pre) = NULL;
    aux = lista;

    while(aux != NULL && elem > aux->dado){// Percorre a lista para localizar o elemento
        (*pre) = aux;
        aux = aux->prox;
    }

    if(aux != NULL){// Se o nó não estiver vazio.
        if(aux->dado == elem){
            return 1;
        }
    }

    return 0;
}
// Função que insere o elemento na lista
no *insere(int dado, no *lista){

    no *aux, *pre;// Cria um nó auxiliar que armazenará o elemento dado e um nó pre que aponta para o nó anterior
                  // O ponteiro pre é posicionado como nó anterior na função busca().

    if(!busca(dado, lista, &pre)){
        aux = (no *)malloc(sizeof(no));// Alocação dinâmica do nó auxiliar criado.
        aux->dado = dado;// Armazenamento do dado no nó auxiliar criado.

        // Estrutura condicional que verifica onde, na lista, o nó deve ser inserido
        if(lista == NULL || pre == NULL){// Se o nó tiver que ser inserido na lista vazia ou no início da lista
            aux->prox = lista;
            lista = aux;

        }else{// Se o nó tiver que ser inserido no meio ou final da lista.
            aux->prox = pre->prox;
            pre->prox = aux;
        }
    }else{
        printf("Elemento já está na lista\n");
    }

    return lista;
}

// Função que imprime a lista 
void imprime(no *lista){

    no *aux;
    aux = lista;
    while(aux != NULL){
        printf("%d\t", aux->dado);
        aux = aux->prox;
    }
    printf("\n\n");
}
/*
// Função que remove um elemento da lista
no *remove(int elemento, no *lista){

    no *pre, *lixo;
    if(busca(elemento, lista, &pre)){
        
        if(pre == NULL){// Se o elemento a ser removido for no início.
            lixo = lista;
            lista = lista->prox;
        }else{
            lixo = pre->prox;
            pre->prox = lixo->prox;
        }
        free(lixo);// Desaloca o nó.

    }else{
        printf("Elemento não está na lista.\n");
    }

    return lista;
}*/

// Função que conta a quantidade de nós numa lista
int quantidade_no(no *lista){

    int contador = 1;

    if(lista != NULL){
        contador += quantidade_no(lista->prox);  
    }
    return contador;
}

// Função principal
int main(void){


    int elemento, menu, nos;
    no *lista;

    lista = NULL;// Inicialmente a lista começa vazia

    printf("Inserir: 1\n");
    printf("Remover: 2\n");
    scanf("%d", &menu);
    if(menu == 1){
        printf("Digite um número:\n");
        scanf("%d", &elemento);
        while(elemento >= 0){
            lista = insere(elemento, lista);// Como o insere retorna a lista, utilizamos a variável "lista" do tipo no para armazenar o retorno da funçção.
            printf("Digite um número:\n");
            scanf("%d", &elemento);
        }
    }
    /*
    if(menu == 2){
        lista = remove(elemento, lista);
    }*/
    imprime(lista);
    nos = quantidade_no(lista);
    nos--;
    printf("%d", nos);
    return 0;
}