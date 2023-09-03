//
// Created by pang on 2023/8/30.
//
#include "unit4.h"

int main(void)
{
//    loop_do_base();
//    loop_while_base();
//    loop_while_reverse_int();
//    loop_for_base();
    loop_for_condition_c_base();
    return 0;
}

// do语句基础使用
void loop_do_base() {
    int retry;
    do {
        int no;
        printf("请输入一个整数：");
        scanf("%d",&no);
        if (no % 2)
            puts("这个整数是奇数");
        else
            puts("这个整数是偶数");

        printf("是否重复?【Yes...0 / No...9】:");
        scanf("%d",&retry);
    } while (retry==0);
}

// while语句基础使用
void loop_while_base()
{
    int no;
    printf("请输入一个正整数：");
    scanf("%d",&no);

    while(--no>=0) {
//        printf("%d ",no);
        putchar('*');
    }
//    printf("\n");
    putchar('\n');
}

// 将输入的正整数倒序显示 eg:1963 显示未3691
void loop_while_reverse_int() {
    int no;
    do {
        printf("请输入一个正整数：");
        scanf("%d", &no);
        if (no <= 0)
            puts("\a 请不要输入非正整数");
    } while (no <=0);

    printf("该正整数逆向显示的结果是");
    while(no >0) {
        printf("%d", no % 10);
        no /= 10;
    }
    puts("--end");
}

// for循环基础
void loop_for_base()
{
    int i,no;
    printf("请输入一个正整数：");
    scanf("%d", &no);
    for (i=0;i<no;i++)
        printf("%d ",i);
    puts("\n");
}

// 显示输入的整数值以下的偶数
void loop_for_condition_c_base()
{
    int i,n;
    printf("整数值：");
    scanf("%d", &n);

    for (i = 2; i < n; i+=2)
        printf("%d ",i);
    putchar('\n');
}