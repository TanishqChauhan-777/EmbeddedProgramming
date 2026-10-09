 
#include <stdio.h>

int main()
{
    char name;
    int age;
    float id;
    double marks;

    printf("Size of char: %zu bytes\n", sizeof(name));
    printf("Size of int: %zu bytes\n", sizeof(age));
    printf("Size of float: %zu bytes\n", sizeof(id));
    printf("Size of double: %zu bytes\n", sizeof(marks));

    int nums[5];

    printf("Size of nums array: %zu bytes\n", sizeof(nums));

    return 0;
}