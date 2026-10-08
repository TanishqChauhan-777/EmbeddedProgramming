 #include <stdio.h>
 #include <stdlib.h>


int main()
{
     
    int *ptr = malloc(sizeof(int));

    if(ptr == NULL)
    {
        return 1;
    }

    *ptr = 100;

    printf("value: %d\n", *ptr);

    free(ptr);
    ptr = NULL;

    return 0;
}