#include <iostream>
#include <string>

using namespace std;

struct CalculateResult {
    int max_candy;
    int rest;
};

CalculateResult calculate(int money, int candy_price) {
    int max_candy = money / candy_price;
    int rest = money % candy_price;

    return {max_candy, rest};
}

int main() {
    string s1 = "현재 가지고 있는 돈";
    string s2 = "캔디의 가격";
    string s3 = "최대로 살 수 있는 캔디의 개수=";
    string s4 = "캔디 구입 후 남은 돈 = ";

    int money;
    int candy_price;

    cin >> money;
    cin >> candy_price;
    auto [max, rest] = calculate(money, candy_price);

    cout << endl;
    cout << s1 << " : "<< money << endl;
    cout << s2 << " : " << candy_price << endl;
    cout << s3 << " : " << max << endl;
    cout << s4 << " : " << rest << endl;



    return 0;
}
