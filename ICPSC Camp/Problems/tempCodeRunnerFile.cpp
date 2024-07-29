ector<vector<int>> dp(n, vector<int>(n, -1));

    int i = 0;
    int j = 0;
    if (n & 1)
    {
        i = (n / 2);
        j = (n / 2);
    }
    else
    {
        i = (n / 2) - 1;
        j = (n / 2);
    }
    while (i >= 0 && j < n)
    {
        dp[i][j] = minOperations(a, b, i, j, dp);
        i--;
        j++;
    }

    while (q--)
    {
        int l, r;
        cin >> l >> r;
        cout << dp[l][r] << endl;
    }