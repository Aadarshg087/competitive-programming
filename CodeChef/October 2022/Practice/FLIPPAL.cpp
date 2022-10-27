#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t-- > 0)
    {
        int n;
        cin >> n;
        int x;
        string s(n, x);
        string str;
        cin >> s;
        str = s;

        for (int i = 0; i < n; i++)
        {
            if (s[i]==0)
            {
                s[i]=1;
            }
            else{
                s[i]=0;
            }
            for (int j = i+1; j < n; j++)
            {
                
            }
            
            
        }
        
    }

    return 0;
}