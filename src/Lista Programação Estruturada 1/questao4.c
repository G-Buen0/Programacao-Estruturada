#include<stdio.h>
int main(void){
    int n, f1, f2, i;
    scanf("%d", &n);
    for(i = 1; i <= n; i++){
        scanf("%d %d", &f1, &f2);
        while(f1!=f2){
            if(f1>f2){
                f1 = f1 - f2;
            }else{
                f2 = f2 - f1;
            }
        }
        printf("%d\n", f1);
    }
    return 0;
}