#include "main.h"
/**
 * _memset - fills memory area  with a constant byte.
 * @dest: source string
 * @src: the contant byte for filling
 * @n: lenght of buffer
 * Return: new string.
 */


char* _memcpy(char* dest, char* src, unsigned int n)  
{ 
    char* dest_ptr = dest;
    char* src_ptr = src;
    for (unsigned int i = 0; i < n; i++) {
        *dest_ptr = *src_ptr;
        dest_ptr++;
        src_ptr++;
    }
    return dest;
}

