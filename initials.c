#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    string name = get_string();
    if(name != NULL)
    {
        for(int i = 0, n = strlen(name); i < n-1; i++)
        {
            if(i == 0 && name[0] != ' ')
                printf("%c", toupper(name[0]));
            if(name[i] == ' ' && name[i+1] != ' ')
                printf("%c", toupper(name[i+1]));
        }
        printf("\n");
    }
}