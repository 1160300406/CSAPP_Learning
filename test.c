#include <stdio.h>
#include <stdlib.h>
int main()
{
     int *x=malloc(10*sizeof(int));
     x[10]=1;
     return 0;

}
