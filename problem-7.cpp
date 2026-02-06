#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n + 1];

    cout << "Enter array elements:";
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int pos, x;
    cout << "Enter position to insert: " ;
    cin >> pos;

    cout << "Enter element to insert: ";
    cin >> x;

    for(int i = n; i > pos; i--)
    {
        arr[i] = arr[i - 1];
    }

    arr[pos] = x;
    n++;

    cout << "Array after insertion:" ;
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

