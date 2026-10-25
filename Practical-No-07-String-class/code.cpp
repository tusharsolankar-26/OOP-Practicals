
#include <iostream>
#include <cstring>
using namespace std;

class String
{
    char str[100];

public:
    // Default constructor
    String()
    {
        strcpy(str, "");
    }

    // Parameterized constructor
    String(const char s[])
    {
        strcpy(str, s);
    }

    // Destructor
    ~String()
    {
        // Destructor called automatically
    }

    // Accept function
    void accept()
    {
        cout << "Enter a string: ";
        cin.getline(str, 100);
    }

    // Display function
    void display()
    {
        cout << "String is: " << str << endl;
    }
};

int main()
{
    String s1;

    s1.accept();
    s1.display();

    String s2("Hello World");
    cout << "\nString initialized using constructor:\n";
    s2.display();

    return 0;
}
