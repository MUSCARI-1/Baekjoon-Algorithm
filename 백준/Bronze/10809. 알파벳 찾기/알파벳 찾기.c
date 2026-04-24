#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
    char word[100];
    int num[26];
    int k=0;

    scanf("%s", word);

    for (char j='a'; j<='z'; j++)
    {
        for (int i=0; i>-1; i++)
        {
            if (word[i] == j)
            {
                num[k] = i;
                break;
            }
            else if (word[i] == '\0')
            {
                num[k] = -1;
                break;
            }
        }
        k++;
    }
    for (int s=0; s<26; s++)
    {
        printf("%d ", num[s]);
    }
}