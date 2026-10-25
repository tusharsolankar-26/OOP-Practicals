#include <iostream>
using namespace std;


namespace First
{
    void display()
    {
        cout << "This is the first namespace." << endl;
    }
}


namespace Second
{
    void display()
    {
        cout << "This is the second namespace." << endl;
    }
}

int main()
{
    First::display();
    Second::display();

    return 0;
}