#include <cs50.h>
#include <stdio.h>

float discount(float price, int percentage);

int main(void)
{

// Prompting the variables:
float regular = get_float("Regular price: ");
int percent_off = get_float("Percent off: ");
float sale = discount(regular);
printf("Sale price: %.2f\n", float sale);

}
float discount(float price, int percentage)
{
    return price * (100 - percentage) / 100;
}