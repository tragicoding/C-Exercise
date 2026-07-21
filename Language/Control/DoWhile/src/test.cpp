#include <iostream>
#include <bitset>

using namespace std;

int main()
{
    int number;
    cout << "당신이 입력한 숫자를 이진수로 변환해줍니다." << endl;
    
    do
    {
        cout << "숫자를 입력하세요:";
        cin >> number;
        cout << bitset<8>(number) << endl;
    }   while (number >=0 );

    return 0;
}