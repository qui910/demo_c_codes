//
// Created by pang on 2023/9/3.
//
#include "unit5.h"

// 宏定义 对象式宏
// 对象式宏并不能够用来替换字符串字面量和字符常量中的部分内容，也不能用来替换变量名等标识符中的部分内容。
#define ARRAY_SIZE 5

int main() {
//    array_loop();
//    array_init();
//    array_copy();
//    array_scan();
    array_sort();
    return 0;
}


// 数组的遍历
void array_loop() {
    int i;
    int v[ARRAY_SIZE];

    for (i=0;i<ARRAY_SIZE;i++)
        v[i] = i+1;

    for (i=0;i<ARRAY_SIZE;i++)
        printf("v[%d] = %d \n",i,v[i]);
}

// 数组初始化
void array_init()
{
    int i;
    int v[ARRAY_SIZE] = {1,2,3,4,5};
    // 不指定元素个数，数组会根据初始值的个数自动设定
    // int v[] = {1,2,3,4,5};

    // 用0对{}内没有赋初识值的元素进行初始化。v[2]之后的元素都是0
    // int v[5] = {1,2}

    // 全是0
    // int v[5] = {0};

    // 初始值的个数不能超过数组的元素个数，以下是error
    // int v[5] = {1,2,3,4,5,6}

    // 不能通过赋值语句进行初始化，以下是error
    // int v[5];
    // v = {1,2,3,4,5};

    for (i=0;i<5;i++)
        printf("v[%d] = %d \n",i,v[i]);

    // 初始化时不能使用连等
    // int a = b = 0;   error
    // int a =0, b=0;   right
    double a = 0;
    int  b =0;

    // 赋值表达式 赋值表达式具有右结合性
    // 1.5先赋值给b，但是b为int，故而b最后结果为1
    // b赋值给a，a为double，故而a最后为1.000000
    a = b = 1.5;
    printf("b=%d \n",b);
    printf("a=%f \n",a);

}



// 数组赋值
// C语言不支持使用基本赋值运算符=为数组赋值。只能循环赋值
void array_copy()
{
    int i;
    int a[ARRAY_SIZE] = {17,23,36};
    int b[ARRAY_SIZE];

    for (i=0;i<5;i++)
        b[i] = a[i];

    puts("a  b");
    puts("|----|----|");
    for (i=0;i<5;i++)
        printf("%4d%4d\n",a[i],b[i]);
};


// 从控制获取输入的数组元素
void array_scan()
{
    int i;
    int x[ARRAY_SIZE];

    for (i=0;i<ARRAY_SIZE;i++) {
        printf("x[%d]:",i);
        scanf("%d",&x[i]);
    }

    for (i=0;i<ARRAY_SIZE;i++)
        printf("x[%d]=%d\n",i,x[i]);
}

// 对数组元素进行倒序排列
void array_sort()
{
    int i;
    int x[7];

    for (i=0;i<7;i++) {
        printf("x[%d]:",i);
        scanf("%d",&x[i]);
    }

    for (i=0;i<3;i++) {
        int temp = x[i];
        x[i] = x[6-i];
        x[6-i] = temp;
    }

    puts("倒序排列了");
    for (i=0;i<7;i++)
        printf("x[%d]=%d\n",i,x[i]);
}

