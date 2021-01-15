#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main(){

    char input[100];  
    int num;  
    fgets(input, 100, stdin);
    scanf("%d", &num);
    int len = strlen(input); 
    if(input[len-1] == '\n'){
        input[len-1] = '\0';
        len--;
    }
    if(len < 101){  
        for(int i=0;i < len;i++){  
            int trash = input[i];  
            if(trash >= 'a' && trash <= 'z'){  
                trash += num;  
                if(trash > 122)  
                    trash -= 26;  
            }  
            else if(trash >= 'A' && trash <= 'Z'){  
                trash += num;  
                if(trash > 90)  
                    trash -= 26;  
            }  
            else if(trash >= '0' && trash <= '9'){  
                trash += num;  
                if(trash > 57)  
                    trash -= 10;  
            }  
            input[i] = trash;  
            printf("%c", input[i]);
        }  
        printf("\n") ;
  
    }  
    return 0;  

}
