#include <stdio.h>

int main()
{
    FILE *file = fopen("example.txt", "w"); // Mở file ở chế độ ghi
    if (file == NULL)
    {
        printf("Error opening file.\n");
        return 1;
    }

    fprintf(file, "Hello, Rito!\n"); // Ghi vào file
    fclose(file);                    // Đóng file

    return 0;
}
