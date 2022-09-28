/* main.c */
#include <stdio.h>
#include "askname.h"
int main(int argc, char **argv)
{

 char first[255], last[255], university[255];
 askname(first, last);
 printf("Hello, %s %s %s!\n", first, last, university);

 return 0;
}