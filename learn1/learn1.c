#include <stdio.h>
#include "learn1.h"

// 测试非指针形式接收用户输入
int test1()
{
    int a,b;
    printf("please input number:");
    scanf("%d,%d",&a,&b);
    printf("the input is a=%d,b=%d",a,b);
    return 0;
}

// 测试指针形式接收用户输入
int test2()
{
    int *a,*b;
    printf("please input number:");
    scanf("%d,%d",a,b);
    printf("the input is a=%d,b=%d",*a,*b);
    return 0;
}