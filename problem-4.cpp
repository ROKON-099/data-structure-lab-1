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

    int evenSum = 0;
    int oddSum = 0;

    for(int i = 0; i < n; i++)
    {
        if(arr[i] % 2 == 0)
            evenSum += arr[i];
        else
            oddSum += arr[i];
    }

    cout << "Array elements are:" ;
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Sum of Even Numbers = " << evenSum << endl;
    cout << "Sum of Odd Numbers = " << oddSum << endl;

    return 0;
}

