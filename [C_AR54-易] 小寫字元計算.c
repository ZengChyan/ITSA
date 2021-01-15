#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main()
{
    int n;
    scanf("%d", &n);
    
    int alpha[26] = {0};

    for (int i = 0; i < n; i++) {
        char ch;
        scanf(" %c", &ch);
        alpha[ch-'a']++;
    }
    for (int i = 0; i < 26; i++) {
        if (alpha[i] > 0)
            printf("%c %d\n", i+'a', alpha[i]);
    }
    return 0;
}