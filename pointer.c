 #include <stdio.h>

int main()
{
    int reg = 12;

    reg  ^= (1 << 2);

    printf("Register: %d\n", reg);

    return 0;
}