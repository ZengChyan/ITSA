#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

char *getword(char *str, char *word){
    int str_len = strlen(str);
 
    char *ptr = str, *qtr = word, *textend = ptr+str_len;
 
    while(isspace(*ptr))
        ptr++;
    while(!isspace(*ptr) && ptr < textend){
        *qtr++ = *ptr++;
    }
 
    *qtr = '\0';
    if(*(word) == '\0')
        return NULL;
    else
        return ptr;
}

int main(){

    char str[100];
    
    while(fgets(str, 100, stdin)){
        char *ptr = str;
        char single_word[100];
        int word_cnt = 0;
        float sum = 0;
    
        while((ptr = getword(ptr, single_word))){
            sum += atoi(single_word);
            word_cnt++;
            memset(single_word, '\0', sizeof(single_word));
        }
        
        printf("Size: %d\n", word_cnt);
        printf("Average: %.3f\n", sum / word_cnt);
    }

	return 0;
}
