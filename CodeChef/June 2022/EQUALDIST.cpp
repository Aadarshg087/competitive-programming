/* Alice and Bob are very good friends and they always distribute all the eatables equally among themselves.

Alice has AA chocolates and Bob has BB chocolates. Determine whether Alice and Bob can distribute all the chocolates equally among themselves. */

#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t-- > 0)
    {
        int Choco_Alice, Choco_Bob;
        cin >> Choco_Alice >> Choco_Bob;
        int totalChoco = Choco_Alice + Choco_Bob;
        if (totalChoco % 2 == 0)
        {
            cout << "Yes" << endl;
        }
        else
            cout << "No" << endl;
    }
    return 0;
}