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
	fgets(str, 100, stdin);
    int str_len = strlen(str);
    if(str[str_len-1] == '\n') 
        str[str_len-1] = '\0';
    char *ptr = str;
    char single_word[100];
    int word_cnt = 0;
    while((ptr = getword(ptr, single_word))){
       // printf("%s\n", single_word);
       word_cnt++;
        memset(single_word, 100, '\0');
    }
    printf("%d\n", word_cnt);
    int arr[26] = {0};
    for(int i = 0; i < str_len-1; i++){
        if(str[i] >= 'a' && str[i] <= 'z')
            arr[str[i]-'a']++;
        else if (str[i] >= 'A' && str[i] <= 'Z')
            arr[str[i]-'A']++;
    }
    
    for(int i = 0; i < 26; i++){
        if(arr[i] != 0)
            printf("%c : %d\n", 'a'+i, arr[i]);
    }
	
	
	
	return 0;
}
