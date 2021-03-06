#ifndef CStack_h
#define CStack_h

#include "CLinkedList.h"

#define TRUE    1
#define FALSE    0

typedef int Data;

typedef struct _liststack
{
    List *plist;
}ListStack;

typedef ListStack Stack;

void StackInit(Stack *pstack);
int SIsEmpty(Stack *pstack);

void SPush(Stack *pstack, Data data);
Data SPop(Stack *pstack);
Data SPeek(Stack *pstack);

#endif /* CStack_h */
