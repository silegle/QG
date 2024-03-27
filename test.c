#include"cal.h"
int main()
{
    char str[1024] = { 0 };//将数组每个元素赋值为'\0'
    printf("请输入四则运算表达式:\n");
    scanf_s("%s", str, 20);
    int number = transform(str);
    if (number == -1)
    {
        printf("表达式转换错误:\n");
    }
    else if (number == 1)
    {
        printf("转化后的表达式: %s\n", buffer);
    }
    else
    {
        return 0;
    }
    //成功换成后缀表达式


    //下方计算后缀表达式
    int num = calculate(buffer);
    if (num == 999)
    {
        return 0;
    }
    printf("%d\n", num);
}
