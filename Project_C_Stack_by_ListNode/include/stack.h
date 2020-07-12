#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct ListNode {
    int val;
    struct ListNode *next;
};

struct Queue {
    int size;
    struct ListNode *front;
    struct ListNode *tail;
};

void push(struct Queue *queue, int new_val);
int pop(struct Queue *queue);
int top(struct Queue *queue);
int size(struct Queue *queue);
bool isEmpty(struct Queue *queue);
int search(struct Queue *queue, int val);
