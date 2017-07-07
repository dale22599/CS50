#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    if(argc != 2)
    {
        printf("Please provide a non-negative integer.");
        return 1;
    }
    printf("plaintext:");
    string s = get_string();
    int k = atoi(argv[1]) % 26;
    printf("ciphertext:");
    for(int i = 0, n = strlen(s); i < n; i++)
    {
        if(s[i] >= 'A' && s[i] <= 'Z')
        {
            if(s[i] + k > 'Z')
                printf("%c", s[i] + k - 26);
            else
                printf("%c", s[i] + k);
        }
        else if(s[i] >= 'a' && s[i] <= 'z')
        {
            if(s[i] + k > 'z')
                printf("%c", s[i] + k - 26);
            else
                printf("%c", s[i] + k);
        }
        else
            printf("%c", s[i]);
    }
    printf("\n");
    return 0;
}