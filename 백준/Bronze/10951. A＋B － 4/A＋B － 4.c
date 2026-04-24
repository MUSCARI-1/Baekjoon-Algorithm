#include <stdio.h>
#pragma warning(disable:4996)
int main()
{
    int x, y;
    while (scanf("%d%d", &x, &y) == 2)
    {
        printf("%d\n",x+y);
    }
    return 0;
}