#include<iostream>
using namespace std;

int main()
{
    int n1, n2;

    cout << "Enter size of first array: " << endl;
    cin >> n1;

    int arr1[n1];
    cout << "Enter elements of first array:" << endl;
    for(int i = 0; i < n1; i++)
    {
        cin >> arr1[i];
    }

    cout << "Enter size of second array: " << endl;
    cin >> n2;

    int arr2[n2];
    cout << "Enter elements of second array:" << endl;
    for(int i = 0; i < n2; i++)
    {
        cin >> arr2[i];
    }

    int arr3[n1 + n2];

    for(int i = 0; i < n1; i++)
    {
        arr3[i] = arr1[i];
    }

    for(int i = 0; i < n2; i++)
    {
        arr3[n1 + i] = arr2[i];
    }

    cout << "Merged array:" << endl;
    for(int i = 0; i < n1 + n2; i++)
    {
        cout << arr3[i] << " ";
    }
    cout << endl;

    return 0;
}

