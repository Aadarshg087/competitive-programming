#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t-- > 0)
    {
        int totalProblems, marksPerProblem, possibleMarks;
        cin >> totalProblems >> marksPerProblem >> possibleMarks;
        int k = 0;

        for (int i = 0; i <= totalProblems; i++)
        {
            if ((marksPerProblem * i) == possibleMarks)
            {
                cout << "Yes" << endl;
                k = 1;
                break;
            }
        }
        if (k == 0)
        {
            cout << "No" << endl;
        }
    }

    return 0;
}