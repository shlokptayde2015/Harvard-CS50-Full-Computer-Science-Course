#include <cs50.h>
#include <stdio.h>

int main(void) 
{
    // Prompting user x: 
    long x = get_long("x: ");

    // Prompting user y:
    long y = get_long("y: ");

    // Performing addition:
    printf("%li\n", x + y);

}