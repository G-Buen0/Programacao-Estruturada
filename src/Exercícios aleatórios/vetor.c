#include <stdio.h>
int main(){
    int v[10], a, i, j, k;
    
    for (i=0; i<=10; i++){
        scanf("%d", &a);
        v[i] = a;
    }
    
    for (k=0; k<=10; k++){
        if (v[k]==0 || v[k]<0){
            v[k]= 1;
        }
    }

    for (j=0; j<=10; j++){
        printf("%d\n", v[j]);
    }
    return 0;
}