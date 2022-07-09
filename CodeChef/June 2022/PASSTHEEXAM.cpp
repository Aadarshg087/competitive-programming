/* Chef appeared for an exam consisting of 3 sections. Each section is worth 100 marks.

Chef scored A marks in Section 1, B marks in section 2, and C marks in section 3.

Chef passes the exam if both of the following conditions satisfy:

Total score of Chef is ≥100;
Score of each section ≥10.
Determine whether Chef passes the exam or not. */

#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        if (a >= 10 && b >= 10 && c >= 10 && (a + b + c) >= 100)
        {
            cout << "Pass" << endl;
        }
        else
            cout << "Fail" << endl;
    }

    return 0;
}