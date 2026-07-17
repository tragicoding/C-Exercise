#include <iostream>
#include <string>

using namespace std;

int main() {
    string s1 = "Hello";
    string s2 = "I am";
    string s3 = "years old";
    int age;
    cin >> age;

    cout << s1 << " " << s2 + "  " +to_string(age) + " " + s3 << endl;

    return 0;
}