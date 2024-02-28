#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Prompting the variables:
    const int MINE = 5;
    int points = get_int("How much points did you get?");

    // Performing if-else statements:
    if(int points < MINE) {
        printf("You got more points than me...\n");
        else if(int points > MINE) {
            printf("You got fewer points than me...\n");
            else {
                printf("We got the same points!!!!\n")
            }
        }
    }
}