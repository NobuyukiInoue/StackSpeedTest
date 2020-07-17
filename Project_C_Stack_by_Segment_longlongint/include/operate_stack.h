#include "../include/stack.h"

typedef struct {
    Queue **queue;
    int index;
    int max_size;
} Stack;

Stack* stackCreate(int max);
void stackPush(Stack *stack, int element);
int stackPop(Stack *stack);
int stackTop(Stack *stack);
bool stackEmpty(Stack *stack);
int stackSearch_from_front(Stack *stack, int val);
int stackSearch_from_tail(Stack *stack, int val);
int stackSize(Stack *stack);
void stackDestroy(Stack *stack);
