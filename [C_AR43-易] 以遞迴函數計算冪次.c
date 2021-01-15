#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

unsigned long long intPower(int m,int n)
{
    if(n==1)
        return m;
    else
        return (m*intPower(m,n-1));
}

int main()
{
    int m,n;
    while(~scanf("%d %d",&m,&n))
        printf("%ld\n", intPower(m,n));

    return 0;
}
