/* There is an ATM machine. Initially, it contains a total of KK units of money. NN people (numbered 11 through NN) want to withdraw money; for each valid ii, the ii-th person wants to withdraw A_iA 
i units of money.

The people come in and try to withdraw money one by one, in the increasing order of their indices. Whenever someone tries to withdraw money, if the machine has at least the required amount of money, it will give out the required amount. Otherwise, it will throw an error and not give out anything; in that case, this person will return home directly without trying to do anything else.

For each person, determine whether they will get the required amount of money or not. */

#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        // Tm-->Total Money
        // Tp-->Total People
        int Tm, Tp;
        cin>>Tp>>Tm;
        int array[Tp];
        for (int i = 1; i <= Tp; i++)
        {
            cin>>array[i];
        }
        for (int i = 1; i <= Tp; i++)
        {
            if (Tm>=array[i])
            {
                cout<<"1";
                Tm=Tm-array[i];
            }
            else
                cout<<"0";

        }
        cout<<endl;
    }
    
    return 0;
}