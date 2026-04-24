#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
    char word[1000003];
    int count[26];
    int x = 0;
    int y = 0;
    char result = 'A';
    int result_num = 0;

    scanf("%s", word);

    for (int i=0; i>-1; i++)
    {
        for (char j='a'; j<='z'; j++)
        {
            if (word[i] == j || word[i] == j - 32)
            {
                count[x]++;
            }
            x++;
        }
        if (word[i] == '\0')
        {
            break;
        }
        else
        {
            x = 0;
        }
    }
    result_num = count[0];

    for (int i=1; i<26; i++)
    {
        if (count[i] > result_num)
        {
            result_num = count[i];
            y = i;
        }
    }
    // y에 result_num의 번호가 정수형으로 입력되어있음
    for (int i=0; i<26; i++)
    {
        if (count[i] == result_num)
        {
            if (i != y)
            {
                printf("?");
                return 0;
            }
        }
    }
    result = result + y;
    printf("%c", result);
}