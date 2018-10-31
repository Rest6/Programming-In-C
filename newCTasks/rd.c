#include <stdio.h>
#include <stdlib.h>

int fileReader(){
int a;
FILE *file;
file = fopen("store.txt","r");
if(file){
  while ((a = getc(file)) != EOF)
  putchar(a);
fclose(file);  
}
return 0;
}
