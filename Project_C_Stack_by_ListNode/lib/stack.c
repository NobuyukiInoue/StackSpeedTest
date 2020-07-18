#include <time.h>
#include "../include/stack.h"

/**
    Implement Stack using Queues.
 */

/* Create a stack */
Stack* stackCreate(void) {
    Stack *stack = (Stack *)malloc(sizeof(Stack));

    if (stack == NULL) {
        return NULL;
    }

    /* I'm a stack implemented using linked queue, so I don't need maxSize */
    stack->size = 0;

    return stack;
}

/* Push element x onto stack */
void stackPush(Stack *stack, int element) {
    if (stack == NULL) {
        return;
    }

    ListNode *new_node = (ListNode *)malloc(sizeof(struct ListNode));
    if (new_node == NULL) {
        fprintf(stderr, "myStackPush(%d) new_node allocate error.", element);
        exit(-1);
    }

    new_node->val = element;
    new_node->next = stack->node;
    stack->node = new_node;

    stack->size++;
}

/* Removes the element on top of the stack */
int stackPop(Stack *stack) {
    if (stack == NULL) {
        return 0;
    }

    int item = stack->node->val;
    if (stack->node->next != NULL) {
        ListNode *tmp = stack->node;
        stack->node = stack->node->next;
        free(tmp);
    } else {
        free(stack->node);
        stack->node = NULL;
    }

    stack->size--;

    return item;
}

/* Get the top element */
int stackTop(Stack *stack) {
    if (stack == NULL) {
        return 0;
    }

    return stack->node->val;
}

/* Return whether the stack is empty */
bool stackEmpty(Stack *stack) {
    return (stack->size == 0) ? true: false;
}

/* Return val index */
int stackSearch(Stack *stack, int val) {
    ListNode *workNode = stack->node;

    for (int index = 0; workNode != NULL; index++) {
        if (workNode->val == val) {
            return index;
        }
        workNode = workNode->next;
    }

    return -1;
}

int stackSize(Stack *stack) {
    return stack->size;
}

/* Destroy the stack */
void stackDestroy(Stack *stack) {
    if (stack == NULL) {
        return;
    }

    if (stack->size > 0) {
        ListNode_free(stack->node);
    }

    free(stack);
}

int ListNode_free(struct ListNode* node) {
    if (node == NULL)
        return 0;
    
    int result = 0;

    if (node->next != NULL) {
        result += ListNode_free(node->next);
    }

    free(node);
    result++;

    return result;
}
