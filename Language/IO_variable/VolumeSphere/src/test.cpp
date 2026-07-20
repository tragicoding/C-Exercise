#include <iostream>
#include <cmath>

using namespace std;

const double pi = 2. * std::acos(0.);


double area(double r)
{
    return pi * r*r;
}

double sphere(double r)
{
    return 4.0/3.0 * pi * r*r*r;
}

int main()
{
    int radius;
    cout << "반지름을 입력하시오:";
    cin >> radius;

    double r_area = area(radius);
    double r_sphere = sphere(radius);

    cout << "겉널비= " << r_area << endl;
    cout << "부피= " << r_sphere << endl;


    return 0;
}