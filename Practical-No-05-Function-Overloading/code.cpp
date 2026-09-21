#include <iostream>
using namespace std;

int add(int a, int b)
{
    return a + b;
}

int add(int a, int b, int c)
{
    return a + b + c;
}

float add(float a, float b)
{
    return a + b;
}

int main()
{
    cout << "Sum of two integers: " << add(10, 20) << endl;

    cout << "Sum of three integers: " << add(10, 20, 30) << endl;

    cout << "Sum of two float numbers: " << add(10.5f, 20.5f) << endl;

    return 0;
}