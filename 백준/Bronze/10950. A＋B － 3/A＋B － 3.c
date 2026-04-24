#include <stdio.h>
#pragma warning(disable:4996)
int main()
{
    int n, a, b, c;

    scanf("%d",&n);
    for (int i=0; i<n; i++)
    {
        scanf("%d %d", &a, &b);
        printf("%d\n",a+b);
    }
    return 0;
}