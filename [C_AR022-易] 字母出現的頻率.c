#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main(){
   
    int result[26]= {0};
    char a[200];
    int i,temp;
    fgets(a, 100, stdin);
    if(a[strlen(a)-1] == '\n')
        a[strlen(a)-1] = '\0';
    for(i=0; a[i]!= '\0'; i++)
    {

        if(a[i]>='A' && a[i]<='Z')
        {
            temp = a[i]-'A';
            result[temp]++;
        }
        if(a[i]>='a' && a[i]<='z')
        {
            temp = a[i]-'a';
            result[temp]++;
        }
    }

    for(i=0; i<26; i++)
    {
        if(i==0)
            printf("%d",result[i]);
        else
            printf(" %d",result[i]);
    }
    printf("\n");
    return 0;  
}
