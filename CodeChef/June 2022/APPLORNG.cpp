/* Bob has XX rupees and goes to a market. The cost of apples is Rs. AA per kg and the cost of oranges is Rs. BB per kg.

Determine whether he can buy at least 11 kg each of apples and oranges. */

#include <iostream>
using namespace std;

int main()
{
    int totalMoney;
    int rateApples, rateOranges;
    cin >> totalMoney >> rateApples >> rateOranges;
    int reqMoney = rateApples + rateOranges;
    if (reqMoney <= totalMoney)
    {
        cout << "Yes" << endl;
    }
    else
        cout << "No" << endl;

    return 0;
}