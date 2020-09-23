#include<stdio.h>
#include<stdlib.h>

struct stack{

    int data;
    struct stack * next;
}typedef stack;

// This function pushs the informed data.
stack *push(stack *p, int data){

    stack *aux;

    aux = (stack *)malloc(sizeof(stack));
    aux->data = data;
    aux->next = p;
    p = aux;
    return p;

}

// This function prints all data in a stack.
void print(stack *p){

    while(p != NULL){
        printf("%d\n", p->data);
        p = p->next;
    }
}
int main(void){
    
    stack *p;
    int data;
    p = NULL;
    printf("Digite o número:\n");
    scanf("%d", &data);

    while(data >= 0){
        p = push(p, data);
        printf("Digite o número:\n");
        scanf("%d", &data);
    }
    print(p);
    return 0;
}