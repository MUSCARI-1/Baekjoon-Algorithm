#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
    int count;
    float m, result;
    result = 0;

    scanf("%d", &count);

    float num[count];
    float average[count];

    for (int i=0; i<count; i++)
    {
        scanf("%f", &num[i]);
    }
    m = num[0];

    for (int j=1; j<count; j++)
    {
        if (m < num[j])
        {
            m = num[j];
        }
    }
    for (int k=0; k<count; k++)
    {
        average[k] = num[k] / m * 100;
    }
    for (int k=0; k<count; k++)
    {
        result = average[k] + result;
    }
    result = result / count;
    printf("%f", result);
}
