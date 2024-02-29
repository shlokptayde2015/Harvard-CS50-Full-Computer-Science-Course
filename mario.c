#include <stdio.h>

int main(void)
{
    // Prompting the "n" variable:
    int n;
    do
    {
        n = get_int("Size: ");
    }
    while(n < 4);

    // Performing for-loops:
    for(int i = 0; i < n; i++)
    { 
        printf("#");
    }
    printf("\n");

    for(int j = 0; j < n; j++)
    {
        printf("#");

    }
    printf("\n");
}