//
// Created by pang on 2023/8/29.
//
#include "unit2.h"

int main(void)
{
//    learn_operator();
//    learn_datatype();
//    learn_double_operator();
    learn_convert_datatype();
    return 0;
}

// 运算符学习
void learn_operator() {
    int vx,vy;
    puts("请输入两个整数:");
    printf("整数vx:"); scanf("%d",&vx);
    printf("整数vy:"); scanf("%d",&vy);
    printf("您输入的数字vx是：%d \n",vx);
    printf("您输入的数字vy是：%d \n",vy);
    printf("加法 vx + vy =%d\n", vx+vy);
    printf("除法 vx - vy =%d\n", vx-vy);
    printf("乘法 vx * vy =%d\n", vx*vy);
    // 进行除法运算的 / 运算符和 % 运算符的运算结果是依赖于编译器的
    printf("求商 vx / vy =%d\n", vx/vy);
    // 格式化字符串中%具有转换功能，只显示1个%
    printf("取余 vx %% vy =%d\n", vx%vy);
    // 获取整数vx的最后一位
    printf("vx最后一位是%d \n", vx % 10);
    // 单目运算符 包括：+ - ! ~ 4个
    printf("取反 vx的取反后整数为：%d \n",-vx);
}

// 数据类型
void learn_datatype()
{
    int n; //整数
    double x; //浮点数
    n = 9.99;
    x = 9.99;

    printf("int型变量n的值为：%d \n",n);
    printf("n/2的值为：%d \n",n/2);
    // 注意打印double型使用%f,默认显示小数点后6位数字
    printf("double型变量x的值为：%f \n",x);
    printf("x/2.0：%f \n",x/2.0);
}

// 数据类型和运算
void learn_double_operator()
{
    // 进行整数/整数运算的时候，商的小数部分会被舍弃，
    // 但是浮点数之间的运算，就不会进行舍弃处理。
    int n1,n2,n3,n4;
    double d1,d2,d3,d4;

    n1 = 5/2; // int/int=int  2-->n1
    n2 = 5.0/2.0; // double/double=double，2.5-->n2 但是赋值int时，舍弃小数点后的部分 -->2
    n3 = 5.0/2; // double/int=double，2.5-->n2 但是赋值int时，舍弃小数点后的部分 -->2
    n4 = 5/2.0; // int/double=double，2.5-->n2 但是赋值int时，舍弃小数点后的部分 -->2

    d1 = 5/2; // int/int=int  2-->d1-->2.500000
    d2 = 5.0/2.0; // double/double=double，2.5-->d2-->2.500000
    d3 = 5.0/2; // double/int=double，2.5-->d3-->2.500000
    d4 = 5/2.0; // int/double=double，2.5-->d4-->2.500000

    printf("n1= %d\n",n1);
    printf("n2= %d\n",n2);
    printf("n3= %d\n",n3);
    // 多输出一个\n，表示输出空行
    printf("n4= %d\n\n",n4);

    printf("d1= %f\n",d1);
    printf("d2= %f\n",d2);
    printf("d3= %f\n",d3);
    printf("d4= %f\n",d4);
}

// 类型转换
void learn_convert_datatype()
{
    int a,b;
    a=7;
    b=4;
    printf("整数a:%d \n",a);
    printf("整数b:%d \n",b);

    // 5.500000
    printf("它们的平均值是 %f（int转double）。\n",(double)(a+b)/2);
    // 5
    printf("它们的平均值是 %d（int不转double）。\n",(a+b)/2);
}