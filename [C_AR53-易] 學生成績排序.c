#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int cmp(const void *a, const void *b){
    return *((int *)a) > *((int *)b);
}

int main() {  

    int n;
    scanf("%d", &n);
    int *grade = malloc(sizeof(int) * n);  
    for(int i = 0; i < n; i++){  
        scanf("%d", &grade[i]);
    }  
    
    qsort(grade, n, sizeof(int), cmp);
    
    for(int i = 0;i < n;i++){  
        printf("%d\n", grade[i]);
    }  
    return 0;  
}  
