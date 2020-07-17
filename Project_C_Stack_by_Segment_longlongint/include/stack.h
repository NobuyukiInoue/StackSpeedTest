#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct {
    long long int segment[65536];
    int index;
} Queue;

void push(Queue *queue, long long int new_val);
int pop(Queue *queue);
int top(Queue *queue);
int size(Queue *queue);
bool isEmpty(Queue *queue);
int search_from_front(Queue *queue, long long int val);
int search_from_tail(Queue *queue, long long int val);
