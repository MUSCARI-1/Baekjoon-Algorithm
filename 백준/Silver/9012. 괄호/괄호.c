#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
    char lr2[51];
    int left_count = 0;
    int right_count = 0;

    int run_count;

    scanf("%d", &run_count);
    getchar();

    for (int j=0; j<run_count; j++)
    {
        scanf("%s", lr2);

        for (int i=0; i>-1; i++)
        {
            if (lr2[i] == '(')
            {
                left_count++;
            }
            else if (lr2[i] == ')')
            {
                right_count++;
                if (right_count > left_count)
                {
                    printf("NO\n");
                    left_count = 0;
                    right_count = 0;
                    break;
                }
            }
            else
            {
                if (left_count == right_count)
                {
                    printf("YES\n");
                    left_count = 0;
                    right_count = 0;
                    break;
                }
                else
                {
                    printf("NO\n");
                    left_count = 0;
                    right_count = 0;
                    break;
                }
            }
        }
    }
}
