#include <iostream>
#include <string>

using namespace std;

int main()
{
    char SECRET_CODE = 'h';
    string S1 = "오답! 더 뒤의 알파벳 입니다.";
    string S2 = "오답! 더 앞의 알파벳 입니다.";
    string S3 = "정답!";

    cout << "Code를 맞춰보세요:";

    char CODE;
    int count = 5;
    while (count > 0)
    {
        cin >> CODE;
        if (CODE < SECRET_CODE )
        {
            cout << S1 << endl;
        }
        else if (CODE > SECRET_CODE)
        {
            cout << S2 << endl;
        }
        else
        {
            cout << S3 << endl;
            break;
        }
        count--;

        if (count == 0)
        {
            cout << "횟수 제한 초과" << endl;
        }

       
    }

    return 0;
}