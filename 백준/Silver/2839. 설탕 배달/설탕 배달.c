#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
    int n;
    int count = 0;
    scanf("%d", &n);

    for (int i=0; i>-1; i++)
    {
        if (n % 5 == 0)
        {
            count = count + n / 5;
            printf("%d", count);
            return 0;
        }
        else if (n < 0)
        {
            printf("-1");
            return 0;
        }
        else
        {
            count++;
            n = n - 3;
        }
    }
}
