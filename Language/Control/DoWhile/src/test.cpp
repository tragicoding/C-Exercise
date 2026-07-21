#include <iostream>

using namespace std;

int main()
{
    int number;
    cout << "구구단 수를 입력하세요:";
    cin >> number;
    cout << endl;

    int mul = 1;
    while (mul<10)
    {
        cout << number << " x " << mul << " = " << number * mul << endl;
        mul++;
    }

    return 0;
}