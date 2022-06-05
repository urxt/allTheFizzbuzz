#include <stdio.h>

void fizzbuzzUno()
{
    for(int i = 1; i < 100; i++) 
    {
        if((i % 3) == 0)
            printf("Fizz");

        else if((i % 5) == 0)
            printf("Buzz");

        else if((i % 15) == 0)
            printf("Fizz Buzz");

        else
            printf("%d", i);

        if(i != 99)
            printf(", ");
    }
    printf("\n");
}

void fizzbuzzDos()
{

    for(int i = 1; i < 100; i++) 
    {

        (i % 3) == 0? printf("Fizz"): (i % 5) == 0? printf("Buzz"): (i % 15) == 0? printf("Fizz Buzz"): printf("%d",i);
        if (i != 99)
            printf(", ");

    }
    printf("\n");
}


int main(int argc, char **argv)
{
    // fizzbuzzUno();
    fizzbuzzDos();
    return 0;
}
