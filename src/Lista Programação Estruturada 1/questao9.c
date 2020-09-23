#include<stdio.h>
int main(void){
    int n, m, i, j, cont_geral, cont_local, cont_final;
    scanf("%d %d", &n, &m);
    while(n != 0 || m != 0){
        int num[m], copia[m];
        cont_geral = 0;

        for(i = 0; i<m; i++){
            scanf("%d", &num[i]);
            copia[i] = num[i];
        }
        for(i = 0; i<m; i++){
            cont_local = 0;
            for(j = 0; j<m; j++){
                if((num[i] ==  copia[j]) && (n!=j)){
                    cont_local++;
                    num[j] = -1;
    
                }
            }
            if(cont_local>1){
                cont_geral ++;
            }
            
            
        }
        printf("%d\n", cont_geral);
        scanf("%d %d", &n, &m);
    }
    return 0;
}