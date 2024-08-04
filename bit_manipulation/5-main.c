#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    unsigned int n;

    n = 1024; 
    flip_bit(&n, 1);
    printf("%u\n", n);
    n = 402;
    flip_bit(&n, 98);
    printf("%u\n", n);
    n = 1024;
    flip_bit(&n, 3);
    printf("%u\n", n);
    n = 1024; 
    flip_bit(&n, 1025);
    printf("%u\n", n);
    return (0);
}

