/* main.c */
#include <stdio.h>
#include "askname.h"
int main(int argc, char **argv)
{
 char first[255], last[255], nick[255];
 askname(first, last);
 printf("Hello, %s %s %s!\n", first, last, nick);
 return 0;
}