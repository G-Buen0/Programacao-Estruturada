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
    printf("\n\n");
}

// This function separates the even and odd numbers in a different stacks.
void separates(stack *p, stack *even, stack *odd){
    while(p != NULL){
        if((p->data -(p->data/2)*2) == 0){
            even = push(even, p->data);
        }else{
            odd = push(odd, p->data);
        }
        p = p->next;
    }
    print(even);
    print(odd);
}
int main(void){
    
    stack *p, *even, *odd;
    int data;
    p = NULL;
    even = NULL;
    odd = NULL;
    printf("Digite o número:\n");
    scanf("%d", &data);

    while(data >= 0){
        p = push(p, data);
        printf("Digite o número:\n");
        scanf("%d", &data);
    }
    print(p);
    separates(p, even, odd);
    
    return 0;
}