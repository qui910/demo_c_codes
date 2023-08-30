//
// Created by pang on 2023/8/30.
//
#include "unit3.h"

int main(void)
{
//    if_condition_base();
//    if_use_equals_sign();
//    switch_condition_base();
//    switch_complex_used();
    if_to_switch();
    return 0;
}

// if表达式基础使用
void if_condition_base()
{
    int no;
    printf("请输入一个整数:");
    scanf("%d",&no);

    if (no%5)
        puts("这个整数不能被5整除");
    else
        puts("这个整数能被5整除");
}

// if调教中使用等号
void if_use_equals_sign()
{
    int n1,n2;
    puts("请输入两个个整数。");
    printf("整数1：");scanf("%d",&n1);
    printf("整数2：");scanf("%d",&n2);

    if (n1 == n2)
        puts("它们相等");
    else
        puts("它们不相等");
}

// switch基础使用
void switch_condition_base()
{
    int no;
    printf("请输入一个整数：");
    scanf("%d",&no);

    switch (no % 3) {
        case 0:
            puts("该数能被3整除。");
            break;
        case 1:
            puts("该数不能被3整除，余数1。");
            break;
        case 2:
            puts("该数不能被3整除，余数2。");
            break;
    }
}

// switch复杂使用
void switch_complex_used() {
    int sw;
    printf("请输入一个整数:");
    scanf("%d",&sw);

    switch(sw) {
        case 1: puts("A"); puts("B"); break;
        case 2: puts("C");
        case 5: puts("D"); break;
        case 6:
        case 7: puts("E"); break;
        default: puts("F"); break;
    }
}

// if条件转换为switch
void if_to_switch() {
    int p,q,c;
    puts("请输入两个整数:");
    printf("整数p:"); scanf("%d",&p);
    printf("整数q:"); scanf("%d",&q);

    // 前3个if对p的值进行判断，最后后一个if 当p不是1,2,3时，并且q为4时，c设置为9
    if (p==1)
        c = 3;
    else if (p==2)
        c = 5;
    else if (p==3)
        c = 7;
    else if (q==4)
        c = 9;
    printf("原if条件写法--->c=%d \n", c);

    switch(p) {
        case 1: c = 3; break;
        case 2: c = 5; break;
        case 3: c = 7; break;
        default: if (q==4) c=9;
    }
    printf("现switch条件写法--->c=%d \n", c);
}
