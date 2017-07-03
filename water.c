#include <stdio.h>
#include <cs50.h>

int main(void)
{
    printf("How many minutes does your shower last? ");
    int min = get_int();
    printf("Minutes: %i\nBottles: %i", min, min * 12);
}