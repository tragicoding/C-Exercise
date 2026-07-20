#include <iostream>

using namespace std;

int main()
{
    int a,b,c;
    cout << "3개의 정수를 입력하시오" << endl;
    cin >> a >> b >> c;
    int arr[] = {a,b,c};

    int largest;

    int IDX_1 = 0;
    int IDX_2 = 1;
    int IDX_3 = 2;


    for (int i = 0; i < 3; i++)
    {
        if (arr[IDX_1] >= arr[IDX_2] && arr[IDX_1] >= arr[IDX_3])
        {
            largest = arr[IDX_1];
        }
        
        IDX_1 = (IDX_1+1)%3;
        IDX_2 = (IDX_2+1)%3;
        IDX_3 = (IDX_3+1)%3;
    }

    cout << largest;

    return 0;
}