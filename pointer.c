 #include <stdio.h>
 #include <stdlib.h>


int main()
{
     
     int *ptr = malloc(5 * sizeof(int));

     if (ptr == NULL)
     {
        return 1;
     }

    for(int i=0; i < 5; i++)
    {
        ptr[i] = (i + 1) * 10;
    }

    int *temp = realloc(ptr, 10 * sizeof(int));

    if (temp == NULL)
    {
        free(ptr);
        return 1;
    }

    ptr = temp;

    for(int i = 0; i < 5; i++)
    {
        printf("%d\n", ptr[i]);
    }

    free(ptr);


    return 0;
}