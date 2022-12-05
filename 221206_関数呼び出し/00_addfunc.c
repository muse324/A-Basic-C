#include <stdio.h>
// 数字を出力する

//  # Pythonの場合
//   sum = 1
//   print(sum)
int main()
{
    int x = 1;
    int sum = 0;

    while (x < 5)
    {
        printf("x:%d\n", x);
        sum += x++;
    }
    printf("sum = %d\n", sum);
}