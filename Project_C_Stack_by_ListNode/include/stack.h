#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct ListNode {
    int val;
    struct ListNode *next;
} ListNode;

typedef struct {
    int size;
    struct ListNode *node;
} Stack;

Stack* stackCreate(void);
void stackPush(Stack *stack, int element);
int stackPop(Stack *stack);
int stackTop(Stack *stack);
bool stackEmpty(Stack *stack);
int stackSearch(Stack *stack, int val);
int stackSize(Stack *stack);
void stackDestroy(Stack *stack);
int ListNode_free(struct ListNode* node);
