#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

#define SIZE 20

struct DataItem {
   	const char *data;
	int key;  
};

struct DataItem* hashArray[SIZE]; 
struct DataItem* dummyItem;
struct DataItem* item;

int hashCode(int key) {
   return key % SIZE;
}

struct DataItem *search(int key) {
   //get the hash 
   int hashIndex = hashCode(key);  
	
   //move in array until an empty 
   while(hashArray[hashIndex] != NULL) {
	
      if(hashArray[hashIndex]->key == key)
         return hashArray[hashIndex]; 
			
      //go to next cell
      ++hashIndex;
		
      //wrap around the table
      hashIndex %= SIZE;
   }        
	
   return NULL;        
}

void insert(int key, const char *data) {	

   struct DataItem *item = (struct DataItem*) malloc(sizeof(struct DataItem));
   item->data = data;  
   item->key = key;

   //get the hash 
   int hashIndex = hashCode(key);

   //move in array until an empty or deleted cell
   while(hashArray[hashIndex] != NULL && hashArray[hashIndex]->key != -1) {
      //go to next cell
      ++hashIndex;
		
      //wrap around the table
      hashIndex %= SIZE;
   }
	
   hashArray[hashIndex] = item;
}

struct DataItem* delete(struct DataItem* item) {
   int key = item->key;

   //get the hash 
   int hashIndex = hashCode(key);

   //move in array until an empty
   while(hashArray[hashIndex] != NULL) {
	
      if(hashArray[hashIndex]->key == key) {
         struct DataItem* temp = hashArray[hashIndex]; 
			
         //assign a dummy item at deleted position
         hashArray[hashIndex] = dummyItem; 
         return temp;
      }
		
      //go to next cell
      ++hashIndex;
		
      //wrap around the table
      hashIndex %= SIZE;
   }      
	
   return NULL;        
}

void display() {
   int i = 0;
	
   for(i = 0; i<SIZE; i++) {
	
      if(hashArray[i] != NULL)
         printf("di (%d,%s)\n",hashArray[i]->key,hashArray[i]->data);
      else
         printf("di ~~ \n");
   }
	
   printf("\n");
}

int main() {
   item = (struct DataItem*) malloc(sizeof(struct DataItem));
   //dataItem->data = "test";
   //dataItem->key = -1;

  // insert(1, "test");
  // insert(2, "new Test");
  // insert(42, 80);
  // insert(4, 25);
  // insert(12, 44);
  // insert(14, 32);
  // insert(17, 11);
  // insert(13, 78);
  // insert(37, 97);

char str[999];
FILE * file;
//int i;
//int a = 0;
 
file = fopen( "dic.txt" , "r");

if (file) {
    while (fscanf(file, "%s", str)!=EOF)
       printf("this is string in line %s\n",str);
	
  		insert(0,"Rome");
		insert(1,"Ukr");
		insert(2,"Power");
		insert(3,"rap");
		insert(4,"testing");

    fclose(file);
}else
{
	printf("File not found!");
}

   for(int i = 0; i < 5; i++){
   	display();
   	item = search(i);

   	//if(item != NULL && strcmp(item->data, str[i])) {
      	printf("Element found: %s\n", item->data);
	printf("Element found in string: %s\n", str);
	printf("The size of string: %li\n", strlen(str));
   	//} else {
      	//printf("Element not found\n");
   //}
}

}
