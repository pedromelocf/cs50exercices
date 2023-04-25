#import <cs50.h>
#import <stdio.h>
#import <stdlib.h>
#import <string.h>
#import <ctype.h>

int main (int argc, string argv[])
{
    if (argc != 2 )
    {
        printf("Usage: ./caesar key");
    }
    
    string key = argv[1];
    for (int i = 0; i < strlen(key); i++)
    {
        if (!isdigit(key[i])) 
        {
            printf ("Usage: ./caesar key");
        }
        else 
        {
            printf("OK!");
        }
    }
}    