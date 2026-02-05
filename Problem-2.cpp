#include<iostream>
using namespace std;

int main()
{
    int n, sum = 0;
    float avg;

    cout << "Enter the size of an array: ";
    cin >> n;

    int arr[n];

    // Input loop
    cout << "Enter " << n << " number of array:";
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for(int i = 0; i < n; i++)
    {
        sum += arr[i];
    }

    avg = (float)sum / n;


    cout << "Array elements are:";
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << "\nSum = " << sum;
    cout << "\nAverage = " << avg;

    return 0;
}
