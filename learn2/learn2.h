//
// Created by pang on 2023/4/9.
//

#ifndef DEMO_C_CODES_LEARN2_H
#define DEMO_C_CODES_LEARN2_H
struct Student{
    char cName[20];
    int iNumber;
    struct Student *pNext;
};

struct Student* Create();

void Print(struct Student* pHead);
#endif //DEMO_C_CODES_LEARN2_H
