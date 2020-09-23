#include<stdio.h>

int main(void){
    char nome[20], nome1[20], c ;
    int dia, mes, ano, idade;
    scanf("%s\n", &nome);
    scanf("%d %d %d", &dia, &mes, &ano);
    
    FILE *fp;
    FILE *fp1;
    fp = fopen(nome, "r");
    fp1 = fopen("nome2.txt", "w");
    c = fscanf(fp, "%s", &nome1);
    while(c!=EOF){
        fprintf(fp1, "%s", nome1);
        c = fscanf(fp, "%s", &nome1);
    }
    fclose(fp);
    fclose(fp1);
    return 0;
}