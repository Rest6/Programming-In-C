#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "C:\Users\admin\Downloads\tutorials\cucumber-book\main\c4\listAPI.h"

/**
 * Remove the windows path to 'listAPI.h' before pushing to Github
 *
**/

int main(void)
{
 printf("Feature: LinkedList test\n\n");
 printf("Background:\n Given: I create the following employees:\n|Samuel|\n|Sally|\n|Susan|\n\n");

 LinkedList linkedList;
 Employee *samuel = (Employee*) malloc(sizeof(Employee));
 strcpy(samuel->name, "Samuel");
 samuel->age = 32;
 Employee *sally = (Employee*) malloc(sizeof(Employee));
 strcpy(sally->name, "Sally");
 sally->age = 28;
 Employee *susan = (Employee*) malloc(sizeof(Employee));
 strcpy(susan->name, "Susan");
 susan->age = 45;

 printf("Scenario: LinkedList functionality verification\n\n");
 printf("And: I initialize employees\n");
 initializeList(&linkedList);
 addHead(&linkedList, samuel);
 addHead(&linkedList, sally);
 addHead(&linkedList, susan);

 printf("And: I see the following employees\n");
 //Display with added head
 displayLinkedList(&linkedList, (DISPLAY)displayEmployee);

 Node *node = getNode(&linkedList,
 (int (*)(void*, void*))compareEmployee, sally);
 printf("When: I delete the last employee from the list\n");
 delete(&linkedList, node);

 printf("Then: I see the following list:\n");
 //Display list after delete() method
 displayLinkedList(&linkedList, (DISPLAY)displayEmployee);

 printf("Scenario: 'addTailt()' method functionality verification\n\n");
 printf("And: I initialize the list of Employees\n");
 initializeList(&linkedList);
 printf("When: I use 'addTail' function\n");
 addTail(&linkedList, susan);
 addTail(&linkedList, sally);
 addTail(&linkedList, samuel);

 printf("Then: I see the list of all employees:\n");
 //Display list with added tail
 displayLinkedList(&linkedList, (DISPLAY)displayEmployee);

return 0;
}

