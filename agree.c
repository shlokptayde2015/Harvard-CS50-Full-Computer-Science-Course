#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Prompting user to agree:
    char c = get_char("Do you agree? ");

    // Performing if-else statements:
    if(char c == 'y' || 'Y') {
        printf("You agree!\n");
        else if(char c == 'n' || 'N') {
            printf("You do not agree...\n");
        }
    }
} 