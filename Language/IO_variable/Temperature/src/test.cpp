#include <iostream>
#include <cmath>
#include <string>

using namespace std;

double FtoC(double F)
{
    double C = (5.0/9.0) * (F-32);
    return C;
}

int main()
{
    double F_input;
    double C;

    cout << "화씨온도를 입력하시오:" ;
    cin >> F_input;

    C = FtoC(F_input);
    cout << "섭씨온도: " << C << endl;
    

    return 0;
}