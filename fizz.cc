#include <iostream>

void fizzbuzzUno();

int main(int argc, char **argv)
{
    fizzbuzzUno();
    return 0;
}

void fizzbuzzUno() 
{
    for(int i = 1; i < 100; ++i) {

        if((i % 3) == 0)
            std::cout << "Fizz" << "\n";

        else if((i % 5) == 0)
            std::cout << "Buzz" << "\n";

        else if((i % 15) == 0)
            std::cout << "Fizz Buzz" << "\n";

        else 
            std::cout << i << "\n";
    }
}

