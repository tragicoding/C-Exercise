#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

pair<int,int> call_random()
{
    return {rand() % 100,rand() % 100};
}

bool add(int n1, int n2)
{
    int answer = n1 + n2;
    int your_answer;
    cout << n1 << " + " << n2 << " = ";
    cin >> your_answer;

    return answer==your_answer;
}

bool substract(int n1, int n2)
{
    int answer = n1 - n2;

    int your_answer;
    cout << n1 << " - " << n2 << " = ";
    cin >> your_answer;

    return answer==your_answer;
}

bool multiply(int n1, int n2)
{
    int answer = n1 * n2;

    int your_answer;
    cout << n1 << " * " << n2 << " = ";
    cin >> your_answer;

    return answer==your_answer;
}

bool divide(int n1, int n2)
{
    if (n1==0) {n1 = rand() % 100;}

    int answer = n1 / n2;

    int your_answer;
    cout << n1 << " / " << n2 << " = ";
    cin >> your_answer;

    return answer==your_answer;
}

int main()
{
    srand(time(0));

    int score = 100;
    int count = 10;

    cout << "총 10문제, 10점씩 출제됩니다."<< endl;
    while (count > 0)
    {
        auto [number1,number2] = call_random();
        int problem = rand() % 4;
        if ( problem == 0 )
        {
            bool answer = add(number1,number2);
            if (answer==false){score-=10;}
            count--;

        }
        if ( problem == 1 )
        {
            bool answer = divide(number1,number2);
            if (answer==false){score-=10;}
            count--;

        }
        if ( problem == 2 )
        {
            bool answer = substract(number1,number2);
            if (answer==false){score-=10;}
            count--;

        }
        if ( problem == 3 )
        {
            bool answer = multiply(number1,number2);
            if (answer==false){score-=10;}
            count--;

        }
        
    }

    cout << "점수: " <<score;
    return 0;
}

