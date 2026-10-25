#include <iostream>
using namespace std;


template <class T>
T add(T a, T b)
{
    return a + b;
}


template <class T>
class Calculator
{
    T a, b;

public:
    Calculator(T x, T y)
    {
        a = x;
        b = y;
    }

    T multiply()
    {
        return a * b;
    }
};

int main()
{
   
    cout << "Addition of integers: " << add(10, 20) << endl;
    cout << "Addition of floats: " << add(2.5f, 3.5f) << endl;

   
    Calculator<int> c1(5, 4);
    cout << "Multiplication of integers: " << c1.multiply() << endl;

    Calculator<float> c2(2.5f, 4.0f);
    cout << "Multiplication of floats: " << c2.multiply() << endl;

    return 0;
}