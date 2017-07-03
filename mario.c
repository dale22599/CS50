#include <stdio.h>
#include <cs50.h>

int main(void)
{
    printf("How high do you want your pyramid? ");
    int height = get_int();
    while (height < 0 || height > 23)
    {
        if (height == 420)
            printf("Sorry, not that type of pyramid. ");
        printf("Please enter an integer from 0 to 23: ");
        height = get_int();
    }
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < height - i - 1; j++)
            printf(" ");
        for (int k = 0; k < i + 1; k++)
            printf("#");
        printf("  ");
        for (int k = 0; k < i + 1; k++)
            printf("#");
        printf("\n");
    }
}