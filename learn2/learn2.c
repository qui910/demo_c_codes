//
// Created by pang on 2023/4/9.
//

#include "learn2.h"
#include <stdio.h>
#include <stdlib.h>
//  全局变量表示链表长度
int iCount;

struct Student* Create(){
    struct  Student *pHead=NULL;  // 初始化链表头指针为空
    struct  Student *pEnd,*pNew;
    iCount = 0;
    pEnd = pNew = malloc(sizeof(struct Student));
    printf("please first enter Name,then Number,When Number is 0 Then end\n");
    scanf("%s",&pNew->cName);
    scanf("%d",&pNew->iNumber);
    while(pNew->iNumber!=0){
        iCount++;
        // 当前链表节点为空，新增第一个节点。pHead和pEnd都指向第一个节点
        if(iCount==1) {
            pNew->pNext=pHead;
            pEnd = pNew;
            pHead = pNew;
        } else {
            // 后续添加将新节点指向NULL，并将pEnd指向最后一个节点。
            pNew->pNext=NULL;
            pEnd->pNext = pNew;
            pEnd = pNew;
        }
        // 继续输入，持续添加到链表
        pNew = malloc(sizeof(struct Student));
        scanf("%s",&pNew->cName);
        scanf("%d",&pNew->iNumber);
    }
    free(pNew);
    return pHead;
}

void Print(struct Student* pHead)
{
    struct Student *pTemp;
    int ilndex=1;
    printf("----这个链表中有%d个成员:---\n",iCount);
    printf("\n");
    pTemp=pHead;
    while(pTemp!=NULL)
    {
        printf("成员%d是：\n",ilndex);
        printf("姓名是：%s\n",pTemp->cName);
        printf("学号是：%d\n",pTemp->iNumber);
        printf("\n");
        pTemp=pTemp->pNext;
        ilndex++;
    }
}

