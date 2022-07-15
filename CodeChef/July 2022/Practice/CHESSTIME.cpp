/* Chef has recently started playing chess, and wants to play as many games as possible.

He calculated that playing one game of chess takes at least 20 minutes of his time.

Chef has N hours of free time. What is the maximum number of complete chess games he can play in that time? */

#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        const int eachGame = 20;
        int totalHours;
        cin >> totalHours;
        int hours_in_minutes = totalHours * 60;
        cout<<hours_in_minutes/eachGame<<endl;
    }

    return 0;
}