#include <stdio.h>
int main(void){
    char s1[50], s2[50], s[100];
    int i=0, cont=0, j=0, k=0, v=0;
    scanf("%s", s1);
    scanf("%s", s2);
    
    while(v!=-1){
        
        if (s1[i]!='\0')
        {
            s[i] = s1[i];
            i++;
            cont += 1;
        }else
        {
            v = -1;
        }
        
    }
    v=0;
    while(v!=-1){
        
        if(s2[j]!='\0')
        {
            s[cont] = s2[j];
            j++;
            cont+= 1;
        }else
        {
            v = -1;
        }
        
        
    }

    while (k!=-1)
    {
        if (s[k]!= '\0')
        {
            printf("%c", s[k]);
            k++;
        }else
        {
            return 0;
        }   
    }
}