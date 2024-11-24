#include <stdio.h>

int main()
{
    short int small_number = 32767;            // Số nguyên ngắn
    long int large_number = 123456789;         // Số nguyên dài
    unsigned int positive_number = 4294967295; // Không dấu

    printf("Small Number: %d\n", small_number);
    printf("Large Number: %ld\n", large_number);
    printf("Positive Number: %u\n", positive_number);

    return 0;
}
