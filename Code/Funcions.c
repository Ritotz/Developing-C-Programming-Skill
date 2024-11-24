#include <stdio.h>

// Hàm tính bình phương
int square(int num)
{
    return num * num;
}

int main()
{
    int result = square(5);
    printf("Square of 5: %d\n", result);

    return 0;
}
