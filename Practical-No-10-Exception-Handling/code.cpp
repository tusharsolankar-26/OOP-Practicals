
#include <iostream>
using namespace std;

int main()
{
    int a, b, c;

    cout << "Enter values of a and b: " << endl;
    cin >> a >> b;

    try
    {
        if (b == 0)
            throw b;

        c = a / b;

        cout << "\nDivision is: " << c;
    }
    catch (int x)
    {
        cout << "\nDivision by zero is not possible";
        cout << "\nError: " << x;
    }

    cout << "\nAt the end of program main function";

    return 0;
}
