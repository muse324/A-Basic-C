#include <stdio.h>
int addup(int i)
{
    while (i <= 5)
    {
        i = i + 1;
        printf("i=%d\n", i);
    }
    i = i * i;
    return i;
}

int main()
{
    int i = 0;
    int sum = 0;

    sum = addup(i);
    printf("i = %d\n", sum);
}

