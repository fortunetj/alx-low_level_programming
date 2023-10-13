#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *_memcpy(char *dest, char *src, unsigned int n)
{
    unsigned int i;
    for (i = 0; i < n; i++)
    {
        dest[i] = src[i];
    }
    return dest;
}

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
    void *ptr2;

    if (old_size == new_size)
    {
        return ptr;
    }

    if (ptr == NULL)
    {
        ptr2 = malloc(new_size);
        if (ptr2 == NULL)
        {
            return NULL;
        }
        return ptr2;
    }

    if (new_size == 0)
    {
        free(ptr);
        return NULL;
    }

    ptr2 = malloc(new_size);
    if (ptr2 == NULL)
    {
        return NULL;
    }

    _memcpy(ptr2, ptr, (new_size < old_size) ? new_size : old_size);

    free(ptr);
    return ptr2;
}
