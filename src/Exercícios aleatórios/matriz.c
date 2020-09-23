#include <stdio.h>
int main(void){
    int n, m[3][3], i,j,g=0, v=0;
    char c;
    
    for(i=0; i<=2;i++)
    {   
        for(j=0;j<=2;j++){
            m[i][j] = g;
            g += 1;
        }
        g -= 3;
    }

    scanf("%d %c", &n, &c);
    

    if (c=='s'){
        for(i=0; i<=3; i++){
            v += m[n][i];
        }
        printf("%d\n", v);
        return 0;
    }else
    {
        for(i=0; i<=3; i++){
            v += m[n][i];
        }
        v = v/3;
        printf("%d\n", v);
        return 0;
    }
    
    
}