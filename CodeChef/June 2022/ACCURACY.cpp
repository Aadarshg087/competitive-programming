/*There are 100100 questions in a paper. Each question carries +3 marks for correct answer, -1 marks for incorrect answer and 0 marks for unattempted question.

It is given that Chef received exactly XX (0 \leq X \leq 100)(0≤X≤100) marks. Determine the minimum number of problems Chef marked incorrect. */

#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x;
        int y;
        cin >> x;
        if (x % 3 == 0)
        {
            cout << "0" << endl;
        }
        else
        {
            for (int i = 104; i > x; i--)
            {
                if (i % 3 == 0)
                {
                    y = i;
                }
            }
            int z = y - x;
            cout << z << endl;
        }
    }

    return 0;
}