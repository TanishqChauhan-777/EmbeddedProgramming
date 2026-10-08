 #include <stdio.h>

int main()
{
    int reg = 0;

    reg = reg | (1 << 2);

    printf("Register: %d\n", reg);

    return 0;
}