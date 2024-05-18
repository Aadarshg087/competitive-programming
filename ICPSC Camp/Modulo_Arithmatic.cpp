#include <iostream>
#include <bits/stdc++.h>
using namespace std;

/*
    - Check for overflow
    - Add brackets while using bitwise
    - Check corner cases (out of bounds for loops)
    - Revise the code
    - Try to prove yourself wrong
*/

/*--------------- Everything about Modulo Arithmatic ------------------ */
/*
 (a + b - c * d + e^f / g) % (1e9 + 7) ?????

 Rules or framework
 - Rule 1 - One operation at a time by using brackets to fix the operations
   (((a + b) - (c * d)) + ((e ^ f) / g))
   if the above expression get complicated, use temp varaibles for each calculation
   int MOD = 1e9 + 7; these are used to create smaller values.

- Rule 2 - Always use long long int when you have work with modulo(for safety reasons)
- If  we have to find the a / b then, we should so a * b^-1 (raised to power)
- Rule 3 - to find inverse of a number use = binpow(x, (MOD - 2)); binary exponentiation using
fermate little theorem
- Rule 4 - In the end use (ans % MOD + MOD) % MOD
  because if there is some neg integer in ans and then, it will convert to positive corresponding answer. It will keep positive as it is and convert the negative. No we can't use abs() function cause modulo -7 % 5 is -2 and with the above approach we will get the corresponding value in positive
  For Example - see the code 1.1


*/

int main()
{

    // Code 1.1
    int ans = -7 % 5;
    int MOD = 5;
    cout << ans << endl; // -2 as output
    ans = ((ans % MOD) + MOD) % MOD;
    cout << ans << endl; // 3 as output

    return 0;
}