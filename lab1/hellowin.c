#include <stdio.h>
#include <stdlib.h>

int byteXor(int x, int y, int n) {
  return (x&(0xff<<(n<<3)))^(y&(0xff<<(n<<3)));
}

int main()
{
    printf("byteXor(0x12345678, 0x87344321, 2)\n");
    return 0;
}
