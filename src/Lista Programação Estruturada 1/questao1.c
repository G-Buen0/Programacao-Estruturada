#include<stdio.h>
#include<math.h>

int primo(int n){
    int verificador = 4, i;
    for (i=2; i<=sqrt(n); i++){
        if (n%i == 0){
            verificador = 3;
        }
    }
    return verificador;
}

int main(void){
    int n, inicial, i, x, k;
    scanf("%d", &n);
    while(n>0){
        k = 0;
        inicial = 1;
        while(k!=n){
            x = primo(inicial);
            
            if (x==4){
                printf("%d\n", inicial);
                k++;
            }
            inicial++;
        }
        scanf("%d", &n);
    }
    return 0;
}
