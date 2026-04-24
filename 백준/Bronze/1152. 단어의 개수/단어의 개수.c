#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
    char sentence[1000003];
    int count = 0;
    int j=1;

    gets(sentence);

    if (sentence[0] != ' ')
    {
        count++;
    }
    else
    {
        if (sentence[1] == '\0')
        {
        }
        else
        {
            count++;
        }
    }

    for (int i=0; i>-1; i++)
    {
        if (sentence[j] == ' ')
        {
            count++;
            if (sentence[j+1] == '\0')
            {
                count--;
            }
        }
        else if (sentence[j] == '\0')
        {
            break;
        }
        j++;
    }
    printf("%d", count);
}