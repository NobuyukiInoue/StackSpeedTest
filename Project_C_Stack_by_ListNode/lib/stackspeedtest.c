#include <time.h>
#include "../include/stackspeedtest.h"

/**
    Implement Stack using Queues.
 */

/* Create a stack */
void stackCreate(Stack *stack, int maxSize) {
    if (stack == NULL) return;

    /* I'm a stack implemented using linked queue, so I don't need maxSize */
    stack->queue.front = stack->queue.tail = 0;
    stack->queue.size = 0;
}

/* Push element x onto stack */
void stackPush(Stack *stack, int element) {
    if (stack == NULL) return;

    push(&stack->queue, element);
}

/* Removes the element on top of the stack */
int stackPop(Stack *stack) {
    if (stack == NULL) {
        return 0;
    }

    int item = stackTop(stack);
    int originalSize = size(&stack->queue);
    int i;
    for (i = 0; i < originalSize - 1; i++) {
        if (stack->queue.front == NULL) {
            return 0;
        }
        int tmp = stack->queue.front->val;
        pop(&stack->queue);
        push(&stack->queue, tmp);
    }

    pop(&stack->queue);

    return item;
}

/* Get the top element */
int stackTop(Stack *stack) {
    if (stack == NULL || stack->queue.tail == NULL) {
        return 0;
    }
    else {
        return stack->queue.tail->val;
    }
}

/* Return whether the stack is empty */
bool stackEmpty(Stack *stack) {
    if (stack == NULL) {
        return true;
    }

    return isEmpty(&stack->queue);
}

/* Return val index */
int stackSearch(Stack *stack, int val) {
    return search(&stack->queue, val);
}

int stackSize(Stack *stack) {
    return size(&stack->queue);
}

/* Destroy the stack */
void stackDestroy(Stack *stack) {
    if (stack == NULL) return;

    while (size(&stack->queue) > 0) {
        pop(&stack->queue);
    }
}

int stackspeedtest(int max) {
    clock_t time_start = clock();

    Stack s;
    stackCreate(&s, max);

    for (int i = 1; i <= max; i++) {
        stackPush(&s, i);
//      printf("stackPush(%d)\n", i);
    }

    printf("stackPush(%d) done.\n", max);
    printf("stackSearch(1) ... %d\n", stackSearch(&s, 1));

    while (stackEmpty(&s) == false) {
    /*
        int size = stackSize(&s);
        int top  = stackTop(&s);
        int pop  = stackPop(&s);
        printf("size = %d, top = %d, pop = %d\n", size, top, pop);
    */
        stackPop(&s);
    }

    printf("stackPop() done.\n");
    if (stackEmpty(&s) != 0) {
        printf("stackEmpty() ... %s\n", "true");
    } else {
        printf("stackEmpty() ... %s\n", "false");
    }

    printf("destroy stack.\n");
    stackDestroy(&s);

    clock_t time_end = clock();
    printf("Execute time : %.3f [ms]\n\n", (double)(time_end - time_start)*1000/CLOCKS_PER_SEC);

    return 0;
}
