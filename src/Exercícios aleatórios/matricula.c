#include<stdio.h>
int main(void){
    int mat, si, ai, c, pe;
    printf("Digite a matricula:\n");
    scanf("%d", &mat);
    si = mat/100000000;
    ai = (mat%100000000)/1000000;
    c = ((mat%100000000)%1000000)/1000;
    pe = (((mat%100000000)%1000000)%1000)/10;
    printf("%d\n", si);
    printf("%d\n", ai);
    printf("%d\n", c);
    printf("%d\n", pe);
    return 0;
}