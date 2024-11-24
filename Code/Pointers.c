#include <stdio.h>

int main()
{
    int value = 42;
    int *ptr = &value;

    printf("Value: %d\n", value);
    printf("Address of Value: %p\n", ptr);
    printf("Value via Pointer: %d\n", *ptr);

    return 0;
}
