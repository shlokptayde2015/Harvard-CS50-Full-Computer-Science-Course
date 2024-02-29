#include <stdio.h>

void meow(int n) {
    int i = 0;
    while(int i < n) {
        printf("Meow\n");
    }
}

 int main(void)
{
    meow(3); 
}