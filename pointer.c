 #include <stdio.h>

int main()
{
    int nums[5] = {10, 20, 30, 40, 50};
    int *ptr = nums;

    printf("Array size: %zu bytes\n", sizeof(nums));
    printf("Pointer size: %zu bytes\n", sizeof(ptr));

    return 0;
}