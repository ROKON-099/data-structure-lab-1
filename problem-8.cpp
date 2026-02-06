#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter size of arrays: " ;
    cin >> n;

    int arr1[n], arr2[n], arr3[2 * n];

    cout << "Enter elements of first array (ascending):" ;
    for(int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }

    cout << "Enter elements of second array (ascending):" ;
    for(int i = 0; i < n; i++)
    {
        cin >> arr2[i];
    }

    int i = 0, j = 0, k = 0;

    while(i < n && j < n)
    {
        if(arr1[i] < arr2[j])
            arr3[k++] = arr1[i++];
        else
            arr3[k++] = arr2[j++];
    }

    while(i < n)
        arr3[k++] = arr1[i++];

    while(j < n)
        arr3[k++] = arr2[j++];

    cout << "Merged sorted array:";
    for(int i = 0; i < 2 * n; i++)
    {
        cout << arr3[i] << " ";
    }
    cout << endl;

    return 0;
}

