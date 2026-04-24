#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
    int a, b, c;
    int num = 0;
    char str_num[20];
    int num_count[10];

    for (int i=0; i<10; i++)
    {
        num_count[i] = 0;
    }

    scanf("%d %d %d", &a, &b, &c);

    num = a * b * c;
    sprintf(str_num, "%d", num);

    for (int i=0; i>-1; i++)
    {
        if (str_num[i] == '0')
        {
            num_count[0]++;
        }
        else if (str_num[i] == '1')
        {
            num_count[1]++;
        }
        else if (str_num[i] == '2')
        {
            num_count[2]++;
        }
        else if (str_num[i] == '3')
        {
            num_count[3]++;
        }
        else if (str_num[i] == '4')
        {
            num_count[4]++;
        }
        else if (str_num[i] == '5')
        {
            num_count[5]++;
        }
        else if (str_num[i] == '6')
        {
            num_count[6]++;
        }
        else if (str_num[i] == '7')
        {
            num_count[7]++;
        }
        else if (str_num[i] == '8')
        {
            num_count[8]++;
        }
        else if (str_num[i] == '9')
        {
            num_count[9]++;
        }
        else
        {
            break;
        }
    }
    for (int i=0; i<10; i++)
    {
        printf("%d\n", num_count[i]);
    }
}