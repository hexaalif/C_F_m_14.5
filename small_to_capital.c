#include <stdio.h>

int small_to_cap(char c)
{
    char cap = c - 32;
    printf("%c", cap);
    return cap;
}

int main()
{
    char c;
    scanf("%c", &c);
    small_to_cap(c);
    return 0;
}