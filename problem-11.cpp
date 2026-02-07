#include<iostream>
using namespace std;

int main()
{
    int students = 10;
    int quizzes = 4;

    int marks[students][quizzes];

    cout << "Enter marks of 4 quizzes for 10 students:";

    for(int i = 0; i < students; i++)
    {
        cout << "Student " << i + 1 << ":" ;
        for(int j = 0; j < quizzes; j++)
        {
            cin >> marks[i][j];
        }
    }

    cout << endl;
    cout << "Average of best three quizzes:";

    for(int i = 0; i < students; i++)
    {
        int min = marks[i][0];
        int sum = 0;

        for(int j = 0; j < quizzes; j++)
        {
            sum += marks[i][j];
            if(marks[i][j] < min)
                min = marks[i][j];
        }

        sum = sum - min;
        float avg = sum / 3.0;

        cout << "Student " << i + 1 << " Average = " << avg << endl;
    }

    return 0;
}

