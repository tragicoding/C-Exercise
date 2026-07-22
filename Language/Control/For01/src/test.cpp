#include <iostream>

using namespace std;

int main()
{

    int count = 0;

    for (int i = 0; i<10; i++)
    {
        if (i == 6) {break;}
        if (i % 2 ==0){continue;}
        count++;
    }

    cout << "total loop: " << count << endl;

    return 0;
}