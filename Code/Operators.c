#include <stdio.h>

int main()
{
    int a = 10, b = 3;

    // Arithmetic
    printf("Addition: %d\n", a + b);
    printf("Division: %d\n", a / b);
    printf("Modulus: %d\n", a % b);

    // Relational
    printf("a > b: %d\n", a > b);

    // Logical
    printf("a > 5 AND b < 5: %d\n", (a > 5 && b < 5));

    // Bitwise
    printf("a & b: %d\n", a & b);
    printf("a | b: %d\n", a | b);

    // Assignment
    a += b;
    printf("After a += b, a = %d\n", a);

    return 0;
}
