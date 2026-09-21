#include <iostream>
using namespace std;

void read(int arr[], int n)
{
    cout << "Enter " << n << " elements: ";

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
}


void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

void sort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}


void display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
}

int main()
{
    int arr[100];
    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    read(arr, n);

    cout << "Array before sorting: ";
    display(arr, n);

    sort(arr, n);

    cout << "Array after sorting: ";
    display(arr, n);

    return 0;
}