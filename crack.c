#define _XOPEN_SOURCE
#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, string argv[])
{
    if(argc != 2)
    {
        printf("hash\n");
        return 1;
    }
    
    string hash = argv[1];
    char salt[3];
    strncpy(salt, hash, 2);
    
    char pass[5] = "";
    
    for(int i = 0; i < 4; i++)
    {
        for(char a = 'A'; a <= 'z'; a++)
        {
            pass[0] = a;
            if(strcmp(hash, crypt(pass, salt)) == 0)
            {
                printf("%s\n", pass);
                return 0;
            }
            if(i > 0)
            {
                for(char b = 'A'; b <= 'z'; b++)
                {
                    pass[1] = b;
                    if(strcmp(hash, crypt(pass, salt)) == 0)
                    {
                        printf("%s\n", pass);
                        return 0;
                    }
                    if(i > 1)
                    {
                        for(char c = 'A'; c <= 'z'; c++)
                        {
                            pass[2] = c;
                            if(strcmp(hash, crypt(pass, salt)) == 0)
                            {
                                printf("%s\n", pass);
                                return 0;
                            }
                            if(i > 2)
                            {
                                for(char d = 'A'; d <= 'z'; d++)
                                {
                                    pass[3] = d;
                                    if(strcmp(hash, crypt(pass, salt)) == 0)
                                    {
                                        printf("%s\n", pass);
                                        return 0;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
}