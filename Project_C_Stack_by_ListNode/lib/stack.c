#include "../include/stack.h"

/**
    Implement Queue using Linked List.
 */

void push(struct Queue *queue, int new_val) {
    if (queue == NULL) {
        return;
    }

    struct ListNode *new_node = (struct ListNode *)malloc(sizeof(struct ListNode));

    new_node->val = new_val;
    new_node->next = NULL;

    if (queue->tail != NULL) {
        queue->tail->next = new_node;
    }

    queue->tail = new_node;

    if (queue->front == NULL) {
        queue->front = new_node;
        queue->size = 1;
    } else {
        queue->size++;
    }
}

void pop(struct Queue *queue) {
    if (queue == NULL || queue->front == NULL) {
        return;
    }

    struct ListNode *tmp = queue->front;
    queue->front = queue->front->next;

    free(tmp);
    queue->size--;

    if (queue->front == NULL) {
        queue->tail = NULL;
        queue->size = 0;
    }
}

int size(struct Queue *queue) {
    if (queue == NULL) {
        return 0;
    } else {
        return queue->size;
    }
}

bool isEmpty(struct Queue *queue) {
    if (queue == NULL) {
        return true;
    } else {
        return (queue->size == 0) ? true : false;
    }
}

int search(struct Queue *queue, int val) {
    if (queue == NULL) {
        return -1;
    }

    struct Queue *temp = queue;
    for (int i = 0; temp->front != NULL; i++) {
        if (temp->front->val == val) {
            return i;
        }
        temp->front = temp->front->next;
    }

    return -1;
}
