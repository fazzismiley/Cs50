#include <stdio.h>

int get_h(void);

int main(void)
{
    int i, w, b;
    int l = get_h();
    for (i=0; i < l; i++)
    {
      for (w=0; w < l - i - 1; w++)
      {
        printf("%c",' ' );
      }
      for (b = 0; b < i + 1; b++)
      {
        printf("#");
      }
      printf("  ");
      // for loop param same as above refactor into a fxn
      for (b=0; b< i+1; b++)
      {
          printf("#");
      }
      for (w=0; w < l - i - 1; w++);
      {
          printf(" ");
      }
      printf("\n");
    }
}

int get_h(void)
{
    int h;
    do
    {
      printf("Input a height for the pyramid\n");
      printf("must be less than 24 and positive\n");
      scanf("%d", &h);
    }
    while (h < 1 || h > 23);
    return h;
}
