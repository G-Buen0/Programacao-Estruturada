#include<stdio.h>
#define max 100

// Estrutura do produto.
struct product{
    
    char name[10];
    int price, id;
    
}typedef product;

// Função que imprime os dados de todos os produtos
void print_products(product *list, int length){

    int i = 0;
    for(i=0; i<length; i++){
        printf("Nome:\t%s\n", list[i].name);
        printf("Preço:\t%d\n", list[i].price);
        printf("Código:\t%d\n", list[i].id);
    }
}
// Função principal
int main(){

    int i = 0, price, id, verified = 1, length = 0;
    product array[max];
    while(verified == 1){
        
        printf("Digite o nome do produto:\n");
        scanf("%s", &array[i].name);
        printf("Digite o preço do produto:\n");
        scanf("%d", &array[i].price);
        printf("Digit o código do produto:\n");
        scanf("%d", &array[i].id);
        i ++;
        length ++;
        printf("Digite 1 para inserir novo produto:\n");
        scanf("%d", &verified);
        
    }
    print_products(array, length);
    return 0;

}

