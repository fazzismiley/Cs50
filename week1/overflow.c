#include <stdio.h>

int main(void)
{
  //int n = 0;
  long long n = 1;
  for (int i = 0; i < 64; i++)
  {
      printf("n is %lld\n", n);
      n = n * 2;
  }
}
