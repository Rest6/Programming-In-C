#include <stdio.h>
#include <stdlib.h>
#include "p.c"

int swap();

int main(int argc, char *argv[])
{

swap(atoi(argv[1]), atoi(argv[2]));

return 0;
}
