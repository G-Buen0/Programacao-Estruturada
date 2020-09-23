#include<stdio.h>
int main(void){
    
    char string1[30], string2[30];
    scanf("%s", &string1);
    scanf("%s", &string2);

    int i, j , cont1 = 0, k = 0, maior = -1;
    char string_aux[30];
    
    i = 0;
    while(string1[i]!= '\0'){
        j = 0;
        while(string2[j]!='\0'){
            
            if(string1[i]==string2[j]){
                string_aux[k] = string2[j];
                printf("%c i = %d j = %d ", string_aux[k], i, j);
                i++;
                j++;
                k++;
                cont1++;
            }else{
                j++;
            }
        }
        i++;
    }
    cont1--;
    string_aux[cont1] = '\0';
    printf("\n");
    printf("%s", string_aux);
    return 0 ;
}