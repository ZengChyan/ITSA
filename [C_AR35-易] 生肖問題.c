#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int count (int x)
{
    if(x <= 2008 && (2008-x) % 12 == 0)
        return 0;
    else if(x > 2008)
        return (x-2008) % 12;
    else
        return 12-(2008-x) % 12;
}

int main()
{
    char zodic[12][10]= {"rat","ox","tiger","rabbit","dragon","snake","horse","sheep","monkey","rooster","dog","pig"};
    int n;
    
    scanf("%d",&n);
    printf("%s\n",zodic[count(n)]);
    
    
    return 0;
}
