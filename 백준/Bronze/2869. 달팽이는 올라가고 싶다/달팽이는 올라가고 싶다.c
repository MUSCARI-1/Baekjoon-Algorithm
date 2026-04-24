#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
    int a, b, v;
    int now = 0;
    int count = 0;

    scanf("%d %d %d", &a, &b, &v);

    for (int i=0; i>-1; i++)
    {
        if (now + (a - b) * 10000 + a < v)
        {
            count = count + 10000;
            now = now + (a - b) * 10000;
        }
        else
        {
            break;
        }
    }
    for (int i=0; i>-1; i++)
    {
        if (now + (a - b) * 100 + a< v)
        {
            count = count + 100;
            now = now + (a - b) * 100;
        }
        else
        {
            break;
        }
    }
    for (int i=0; i>-1; i++)
    {
        if (now + a < v)
        {
            count++;
            now = now + a - b;
        }
        else
        {
            count++;
            printf("%d", count);
            return 0;
        }
    }
}
