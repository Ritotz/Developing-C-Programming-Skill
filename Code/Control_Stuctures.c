#include <stdio.h>

int main()
{
    int score = 85;

    if (score >= 90)
    {
        printf("Grade: A\n");
    }
    else if (score >= 80)
    {
        printf("Grade: B\n");
    }
    else
    {
        printf("Grade: C or below\n");
    }

    return 0;
}

// #include <stdio.h>

// struct Student
// {
//     char name[50];
//     int age;
//     float grade;
// };

// int main()
// {
//     struct Student student1 = {"Alice", 20, 9.5};

//     printf("Name: %s\n", student1.name);
//     printf("Age: %d\n", student1.age);
//     printf("Grade: %.2f\n", student1.grade);

//     return 0;
// }
