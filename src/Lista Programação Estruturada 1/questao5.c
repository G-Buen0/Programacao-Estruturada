#include<stdio.h>
int main(void){
    int g, i;
    scanf("%d", &g);
    while(g!=0){
        int va[g+1], vb[g+1], vc[g+1], cont1 = 1, cont2 = 0;
        
        for(i = 0; i<g+1; i++){
            scanf("%d", &va[i]);
            vb[i] = va[i]/cont1;
            vc[i] = va[i]*cont2;
            cont1++;
            cont2++;
        }
        int escrita_int = g+1, escrita_der =g-1;
        for(i = g; i>=0; i--){
            printf("%dX%d +\t", vb[i], escrita_int);
            escrita_int--;
        }
        printf("0\n");
        
        for(i = g; i>0; i--){
            printf("%dX%d +\t", vc[i], escrita_der);
            escrita_der--;
        }
        printf("0\n");

        scanf("%d", &g);
    }
    return 0;
}