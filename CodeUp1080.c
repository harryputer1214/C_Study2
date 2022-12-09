#include <stdio.h>

int main()
{
    int a, b, c;
    b=0;
    scanf("%d",&a);
    while(c<a)
    {
        b=b+1;
        c+=b;
    }
    printf("%d",b);
    return 0;
}
