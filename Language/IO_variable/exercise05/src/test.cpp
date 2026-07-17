#include <iostream>
#include <climits>
 using namespace std;

 int main()
 {
    short n_short = SHRT_MAX;
    int n_int = INT_MAX;
    long n_long = LONG_MAX;
    long long n_llong = LLONG_MAX;

    cout << "The size of short=" << sizeof(n_short) << endl;
    cout << "The max of short=" << n_short << endl;

    cout << endl;

    cout << "The size of int=" << sizeof(n_int) << endl;
    cout << "The max of int=" << n_int << endl;

    cout << endl;

    cout << "The size of long=" << sizeof(n_long) << endl; 
    cout << "The max of long=" << n_long <<  endl;

    cout << endl;

    cout << "The size of long long=" << sizeof(n_llong) << endl;
    cout << "The max of long long=" << n_llong << endl;
    

    return 0;
 }