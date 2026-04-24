#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
    int test_num, st_num;
    char st1[21];

    scanf("%d", &test_num);

    for (int i=0; i<test_num; i++)
    {
        scanf("%d %s", &st_num, st1);
        for (int j=0; st1[j]!='\0'; j++)
        {
            for (int k=0; k<st_num; k++)
            {
                printf("%c", st1[j]);
            }
        }
        printf("\n");
    }
}