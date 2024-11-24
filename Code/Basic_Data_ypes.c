#include <stdio.h>

int main()
{
    int age = 30;                   // Kiểu số nguyên
    float pi = 3.1415;              // Kiểu số thực dấu phẩy động
    double large_pi = 3.1415926535; // Số thực độ chính xác cao
    char grade = 'A';               // Kiểu ký tự
    void *ptr = NULL;               // Con trỏ void

    printf("Age: %d\n", age);
    printf("Pi: %.2f\n", pi);
    printf("Large Pi: %.10lf\n", large_pi);
    printf("Grade: %c\n", grade);

    return 0;
}
