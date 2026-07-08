#include <iostream>
#include <string>

using namespace std;

int x = 10;
int y {20};
int z = 30;

void test_1() {
    char a = 'A';
    char b = 'B';
    string str = "Hello,";
    string name;

    cin >> name;
    cout << str << " " << name << endl;

}

int main() {
    test_1();
    cout << x << " " << y << " " << z << endl;

    return 0; 
}

