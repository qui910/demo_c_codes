//
// Created by pang on 2023/8/21.
//
#include <stdio.h>

/*
 * 函数声明
 */
void printf_test();
void printf_test1();

int main(void)
{
//    printf_test();
    printf_test1();
    return 0;
}

// 最简单的C程序
void printf_test()
{
    printf("15与37的和是%d \n",15+37);
    printf("end \n");
}

// 新增int变量
void printf_test1() {
    int vx,vy;
    vx = 57;
    vy = vx + 10;

    printf("vx的值是%d \n",vx);
    printf("vy的值是%d \n",vy);
}