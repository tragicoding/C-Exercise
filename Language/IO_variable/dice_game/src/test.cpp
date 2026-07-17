#include <ctime>
#include <cstdlib>
#include <iostream>

int main()
{
    srand(time(0));
    
    int sum = 0;
    //int number = rand()%6 + 1;
    for (int i=0; i<2;i++)
    {
        sum += (rand()%6+1);
    }

    std::cout << sum;

    return 0;
}