#include <stdio.h>
#include "multifile.h"

int main()
{
    int num1=10,num2=20,num3,num4;
    num3=sum(num1,num2);
    num4=sqr(num1);
    printf("%d \t %d",num3,num4);
    return 0;
}