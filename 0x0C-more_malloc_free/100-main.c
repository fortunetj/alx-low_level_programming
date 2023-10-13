`
#include <stdio.h>
#include <stdlib.h>
#include <string.h> // Include this for the memcpy function

/**
 * _memcpy - Copies memory from source to destination.
 * @dest: Destination memory.
 * @src: Source memory.
 * @n: Number of bytes to copy.
 * Return: Pointer to the destination memory.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
    for (unsigned int i = 0; i < n; i++)
    {
        dest[i] = src[i];
    }
    return dest;
}

/**
 * _realloc - Reallocates memory for a block.
 * @ptr: Pointer to the original memory block.
 * @old_size: Current size of the memory block.
 * @new_size: New size for the memory block.
 * Return: Pointer to the reallocated memory block.
 */
void *_realloc(void *ptr, unsigned int old
