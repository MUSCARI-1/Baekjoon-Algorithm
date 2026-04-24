#include <stdio.h>
#pragma warning(disable:4996)
int main()
{
    int a, b, c;

    for (int i=1; i>0; i++)
    {
        scanf("%d %d", &a, &b);
        if (a==0 && b==0)
        {
            break;
        }
        else
        {
            c = a + b;
            printf("%d\n",c);
        }
    }
    return 0;
}