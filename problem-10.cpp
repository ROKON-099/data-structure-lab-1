#include<iostream>
using namespace std;

int main()
{
    int r, c;
    cout << "Enter number of rows: " ;
    cin >> r;

    cout << "Enter number of columns: ";
    cin >> c;

    int arr[r][c];

    cout << "Enter elements of the array:";
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            cin >> arr[i][j];
        }
    }

    int sum = 0;

    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            if(i == j)
            {
                sum += arr[i][j];
            }
        }
    }

    cout << "Diagonal elements are:" ;
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            if(i == j)
                cout << arr[i][j] << " ";
            else
                cout << "  ";
        }
        cout << endl;
    }

    cout << "Sum of diagonal elements = " << sum << endl;

    return 0;
}


