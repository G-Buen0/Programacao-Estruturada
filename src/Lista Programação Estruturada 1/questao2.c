#include<stdio.h>
#include<math.h>
int main(void){
    int n, pp, cont, primo, i;
    scanf("%d", &n);
    while(n>0){
        pp = n + 1;
        cont = n;
        while(cont!=0){
            primo = 1;
            for(i = 2; i <= sqrt(pp); i++ ){
                if(pp%i == 0){
                    primo = 0;
                }

            }
            if (primo == 1){
                printf("%d\n", pp);
                cont --;
            }
            pp ++;

        }
        scanf("%d", &n);
    }
    return 0;
}