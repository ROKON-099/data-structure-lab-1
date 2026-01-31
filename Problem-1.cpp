#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of an array: ";
    cin >> n;

    int arr[n];

    cout << "Enter " << n << " number of array:";
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Array elements are:";
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
