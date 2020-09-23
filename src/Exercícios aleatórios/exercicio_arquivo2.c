#include<stdio.h>
#include<ctype.h>
int main(void){
    char nome[20], c, c1;
    scanf("%s", &nome);
    FILE *fp;
    FILE *fp1;
    fp = fopen(nome, "r");
    fp1 = fopen("maiuscula.txt", "w");
    c = fscanf(fp, "%c", &c1 );
    while(c!= EOF){
        c1 = toupper(c1);        
        fprintf(fp1, "%c\n", c1);
        c = fscanf(fp, "%c", &c1 );
    }
    fclose(fp1);
    fclose(fp);
    return 0;
}