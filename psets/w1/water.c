#include <stdio.h>

int get_int(void);

int main(void)
// prints the amount bottles of waters equating to minutes spent in the
// shower by the user
{
    int i = get_int();
    printf("Minutes in shower:%i\n", i);
    printf("Bottles of Water:%i\n", i*12);
}

int get_int(void)
//prompts the user for input int var has no buffersize set
{
    int t ;
    printf("Minutes spent in shower? :\n");
    scanf("%d", &t);

    return t;
}
