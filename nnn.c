#include <stdio.h>
void printself(void);  // プロトタイプ宣言


// main()が最初に呼び出される関数
int main(void)
{
    printf("わーーい");
    printself();
    return 0;
}

// 自作関数の内容
void printself(void)
{
    printf("なんでも文字列");
}
