#include "../include/stack.h"

typedef struct {
    struct Queue queue;
} Stack;

void stackCreate(Stack *stack, int maxSize);
void stackPush(Stack *stack, int element);
int stackPop(Stack *stack);
int stackTop(Stack *stack);
bool stackEmpty(Stack *stack);
int stackSearch(Stack *stack, int val);
int stackSize(Stack *stack);
void stackDestroy(Stack *stack);
int stackspeedtest(int max);
