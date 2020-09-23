#include<stdio.h>
#include<stdlib.h>

struct no{

    char name[10];
    int price;
    int id;
    struct no *next;

}typedef no;

// Função que calcula e retorna a media dos preços
int medium_prices(no *list){
    float med = 0.0, cont = 0.0;
    while(list != NULL){
        med += list->price;
        list = list->next;
        cont ++;
    }
    med = med/cont;
    return med;
}