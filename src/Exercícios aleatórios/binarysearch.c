#include <stdio.h>
  int main(void){
    int quant, i, var;
    scanf("%d", &quant);
    if (quant<0){
      printf("valor invalido\n");
      return 0;
    }
    int vet[quant];
    for (i=0; i<=quant-1; i++){
      scanf("%d",&vet[i]);
      
    }
    int min=0, max=quant-1, aux, num;
    printf("Digite o numero que deseja verificar na lista");
    scanf("%d", &num);
    while(max>=min){
      aux = (min + max)/2;
      printf("%d", aux);
      if(vet[aux]==num){
        printf("O numero esta na lista");
        return 0;
      }
      if(vet[aux]>num){
        max = aux-1;
        

      }else{
        min = aux+1;
      }
    }
    printf("O numero nao esta na lista");
    return 0;

  }