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

typedef struct _tree {
 void *data;
 struct _tree *left;
 struct _tree *right;
} TreeNode;

void insertNode(TreeNode**, COMPARE, void*);
int compareEmployee(Employee*, Employee*);
void displayEmployee(Employee*);
void inOrder(TreeNode*, DISPLAY);
void postOrder(TreeNode*, DISPLAY);
void preOrder(TreeNode*, DISPLAY);

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

 TreeNode *tree = NULL;
 insertNode(&tree, (COMPARE) compareEmployee, samuel);
 insertNode(&tree, (COMPARE) compareEmployee, sally);
 insertNode(&tree, (COMPARE) compareEmployee, susan);

 preOrder(tree, (DISPLAY) displayEmployee);
 inOrder(tree, (DISPLAY) displayEmployee);
 postOrder(tree, (DISPLAY) displayEmployee);

 return 0;
}

void initializeList(LinkedList *list) {
 list->head = NULL;
 list->tail = NULL;
 list->current = NULL;
}

int compareEmployee(Employee *e1, Employee *e2) {
 return strcmp(e1->name, e2->name);
}
void displayEmployee(Employee* employee) {
 printf("%s\t%d\n", employee->name, employee->age);
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

void insertNode(TreeNode **root, COMPARE compare, void* data) {
 TreeNode *node = (TreeNode*) malloc(sizeof(TreeNode));
 node->data = data;
 node->left = NULL;
 node->right = NULL;
 if (*root == NULL) {
 *root = node;
 return;
 }
 while (1) {
 if (compare((*root)->data, data) > 0) {
 if ((*root)->left != NULL) {
 *root = (*root)->left;
 } else {
 (*root)->left = node;
 break;
 }
 } else {
 if ((*root)->right != NULL) {
 *root = (*root)->right;
 } else {
 (*root)->right = node;
 break;
 }
 }
 }
}

void inOrder(TreeNode *root, DISPLAY display) {
 if (root != NULL) {
 inOrder(root->left, display);
 display(root->data);
 inOrder(root->right, display);
 }
}

void postOrder(TreeNode *root, DISPLAY display) {
 if (root != NULL) {
 postOrder(root->left, display);
 postOrder(root->right, display);
 display(root->data);
 }
}

void preOrder(TreeNode *root, DISPLAY display) {
 if (root != NULL) {
 display(root->data);
 preOrder(root->left, display);
 preOrder(root->right, display);
 }
}
