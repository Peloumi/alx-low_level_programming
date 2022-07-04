#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
    char ch = 'a';

    putchar("Lowrcase English Alphabets: \n");

    while ( ch <= 'z')
        putchar("%c \n", ch);
        ch++
    return (0);
}