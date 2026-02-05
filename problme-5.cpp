#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    int arr[n];

    cout << "Enter " << n << " number of elements:";
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int evenIndexSum = 0;
    int oddIndexSum = 0;

    for(int i = 0; i < n; i++)
    {
        if(i % 2 == 0)
            evenIndexSum += arr[i];
        else
            oddIndexSum += arr[i];
    }

    cout << "Array elements are:";
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Sum of Even Indices = " << evenIndexSum << endl;
    cout << "Sum of Odd Indices = " << oddIndexSum << endl;

    return 0;
}

