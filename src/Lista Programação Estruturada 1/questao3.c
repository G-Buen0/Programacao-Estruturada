#include<stdio.h>
int main(void){
    int h1, m1, h2, m2, n=1, inicial, final, sono;
    scanf("%d %d %d %d", &h1, &m1, &h2, &m2);
    while(n == 1){
        if(h1 == 0 && m1 == 0 && h2 == 0 && m2 == 0){
            return 0;
        }
        
        inicial = 60*h1 + m1;
        final = 60*h2 + m2;

        if(final>inicial){
            sono = final - inicial;

        }

        else if (final == inicial){
            sono = 60*24;
            
        }
        else{
            sono = 60*24 - (inicial-final);
            
        }
        
        printf("%d\n", sono);
        
        scanf("%d %d %d %d", &h1, &m1, &h2, &m2);
    }
}