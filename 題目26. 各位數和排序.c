#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int cmp(const void *a, const void *b){
    int tem_a = *((int *)a);
    int tem_b = *((int *)b);
    
    int sum_a = 0, sum_b = 0;
    
     while (tem_a > 9) {
        sum_a += tem_a % 10;
        tem_a /= 10;
    }
    
    sum_a += tem_a;
    
    while (tem_b > 9) {
        sum_b += tem_b % 10;
        tem_b /= 10;
    }
    sum_b += tem_b;

    if (sum_a == sum_b)
        return *((int *)a) > *((int *)b);
    else
        return sum_a > sum_b;
}

int main(){
	
    int n;
    
    scanf("%d", &n);
    
    int *arr = malloc(sizeof(int) * n);
    
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
	
	qsort(arr, n, sizeof(int), cmp);
	
	for(int i = 0; i < n-1; i++){
	    printf("%d ", arr[i]);
	}
	
	printf("%d", arr[n-1]);
	
	return 0;
}
