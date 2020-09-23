#include<stdio.h>
#include<stdlib.h>

struct fila{

    int process_number;
    int process_time;
    struct fila *next;

}typedef fila;

fila *push_process(fila *f, int number, int time){

    fila *aux;
    aux->process_number = number;
    aux->process_time = time;
    while(f->next != NULL){
        f = f->next;
    }
    aux->next  = f->next;// f->next é null.
    f->next = aux;

    return f;

}
int main(void){

    fila *f;
    int process_number, process_time;
    f = NULL;
    printf("Digite o numero do processo:\n");
    scanf("%d", &process_number);
    printf("Digite o tempo do processo:\n");
    scanf("%d", &process_time);

    while(process_number >=0  && process_time >= 0){
        f = push_process(f, process_number, process_time);
        printf("Digite o numero do processo:\n");
        scanf("%d", &process_number);
        printf("Digite o tempo do processo:\n");
        scanf("%d", &process_time);
    }
    return 0;
}