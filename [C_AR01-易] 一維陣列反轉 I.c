#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main(){
   
    int b[100], a, i = 0;

	while (~scanf("%d", &a))
	{
		b[i] = a;
		i++;
	}
	while (i > 0) {
		i--;
		printf("%d", b[i]);
		if (i != 0) printf(" ");
		if (i == 0) printf("\n");
	}
    return 0;  
}
