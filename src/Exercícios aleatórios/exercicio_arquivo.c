#include<stdio.h>
int main(void){
    char c;
    int var;
    FILE *ponteiro;
    ponteiro = fopen("teste.txt", "w");
    scanf("%c", &c);
    while (c != '0')
    {
        fprintf(ponteiro, "%c", c);
        scanf("%c", &c);
    }
    fclose(ponteiro);
    ponteiro = fopen("teste.txt", "r");
    var = fscanf(ponteiro, "%c", &c);
    while (var != EOF)
    {
        printf("%c", c);
        var = fscanf(ponteiro, "%c", &c);
    }
    fclose(ponteiro);
    return 0;
}