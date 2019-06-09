#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef void(*DISPLAY)(void*);
typedef int(*COMPARE)(void*, void*);

typedef struct _employee{
 char name[32];
 unsigned char age;
} Employee;

typedef struct _node {
 void *data;
 struct _node *next;
} Node;

typedef struct _linkedList {
 Node *head;
 Node *tail;
 Node *current;
} LinkedList;

typedef LinkedList Queue;

void initializeQueue(Queue*);
void enqueue(Queue*, void*);
void *dequeue(Queue*);

int main(void)
{
 Employee *samuel = (Employee*) malloc(sizeof(Employee));
 strcpy(samuel->name, "Samuel");
 samuel->age = 32;
 Employee *sally = (Employee*) malloc(sizeof(Employee));
 strcpy(sally->name, "Sally");
 sally->age = 28;
 Employee *susan = (Employee*) malloc(sizeof(Employee));
 strcpy(susan->name, "Susan");
 susan->age = 45;

 Queue queue;
 initializeQueue(&queue);
 enqueue(&queue, samuel);
 enqueue(&queue, sally);
 enqueue(&queue, susan);

 void *data = dequeue(&queue);
 printf("Dequeued %s\n", ((Employee*) data)->name);
 data = dequeue(&queue);
 printf("Dequeued %s\n", ((Employee*) data)->name);
 data = dequeue(&queue);
 printf("Dequeued %s\n", ((Employee*) data)->name);

return 0;
}

void initializeList(LinkedList *list) {
 list->head = NULL;
 list->tail = NULL;
 list->current = NULL;
}

void addHead(LinkedList *list, void* data) {
 Node *node = (Node*) malloc(sizeof(Node));
 node->data = data;
 if (list->head == NULL) {
 list->tail = node;
 node->next = NULL;
 } else {
 node->next = list->head;
 }
 list->head = node;
}

void initializeQueue(Queue *queue) {
 initializeList(queue);
}

void enqueue(Queue *queue, void *node) {
 addHead(queue, node);
}

void *dequeue(Queue *queue) {
 Node *tmp = queue->head;
 void *data;
if (queue->head == NULL) {
 data = NULL;
 } else if (queue->head == queue->tail) {
 queue->head = queue->tail = NULL;
 data = tmp->data;
 free(tmp);
 } else {
 while (tmp->next != queue->tail) {
 tmp = tmp->next;
 }
 queue->tail = tmp;
 tmp = tmp->next;
 queue->tail->next = NULL;
 data = tmp->data;
 free(tmp);
 }
 return data;
}




