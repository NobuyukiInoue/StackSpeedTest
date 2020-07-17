#include <time.h>
#include "../include/operate_stack.h"

/**
    Implement Queue by 64k segments.
 */

#define SegmentSizeMax  65536

/* Create a stack */
Stack* stackCreate(int max) {
    Stack *stack = (Stack *)malloc(sizeof(Stack));
    stack->index = 0;
    stack->max_size = max;
    stack->queue = (Queue **)malloc(sizeof(Queue *)*max);
    stack->queue[0] = (Queue *)malloc(sizeof(Queue));
    stack->queue[0]->index = -1;
    return stack;
}

/* Push element x onto stack */
void stackPush(Stack *stack, int element) {
    if (stack == NULL) {
        return;
    }

    if (stack->queue[stack->index]->index < SegmentSizeMax - 1) {
        push(stack->queue[stack->index], element);

    } else {
        if (stack->index + 1 >= stack->max_size) {
            fprintf(stderr, "stackPush() error.\nSegment count is max(%d).\n", stack->max_size);
        }

        stack->index++;
        stack->queue[stack->index] = (Queue *)malloc(sizeof(Queue));
        stack->queue[stack->index]->index = -1;

        push(stack->queue[stack->index], element);
    }
}

/* Removes the element on top of the stack */
int stackPop(Stack *stack) {
    if (stack == NULL) {
        return 0;
    }

    if (stack->queue[stack->index]->index < 0) {
        if (stack->index > 0) {
            free(stack->queue[stack->index]);
            stack->index--;
        }
    }

    return pop(stack->queue[stack->index]);
}

/* Get the top element */
int stackTop(Stack *stack) {
    if (stack == NULL) {
        return 0;
    }

    return top(stack->queue[stack->index]);
}

/* Return whether the stack is empty */
bool stackEmpty(Stack *stack) {
    if (stack == NULL) {
        return true;
    }

    if (stack->index == 0 && stack->queue[stack->index]->index == -1) {
        return true;
    }

    return false;
}

/* Return val index */
int stackSearch_from_front(Stack *stack, int val) {
    int res;
    for (int i = 0; i <= stack->index; i++) {
        if ((res = search_from_front(stack->queue[i], val)) != -1) {
            return i*SegmentSizeMax + res;
        }
    }
    return -1;
}

/* Return val index */
int stackSearch_from_tail(Stack *stack, int val) {
    int res;
    for (int i = stack->index; i >= 0; i--) {
        if ((res = search_from_tail(stack->queue[i], val)) != -1) {
            return i*SegmentSizeMax + res;
        }
    }
    return -1;
}

/* Return stack Size */
int stackSize(Stack *stack) {
    return (stack->index)*SegmentSizeMax + size(stack->queue[stack->index]);
}

/* Destroy the stack */
void stackDestroy(Stack *stack) {
    if (stack == NULL) {
        return;
    }

    for (int i = stack->index; i >= 0; i--) {
        free(stack->queue[i]);
    }

    free(stack);
}
