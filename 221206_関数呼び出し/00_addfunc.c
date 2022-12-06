#include <stdio.h>

// 数字を出力する
int main()
{
    int x = 0;
    int sum=0;
    while(x<5)
    {
        printf("%d\n",x);
        sum+=x;
        x+=1;
    }

    printf("%d\n",sum);
}