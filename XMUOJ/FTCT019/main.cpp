#include <bits/stdc++.h>
using namespace std;

const int MAX_SIZE = 100001;


int main()
{
    int t, tmp;
    bool dp[MAX_SIZE] = {};
    dp[0] = false;
    dp[1] = true;

    for (int i = 1; i <= MAX_SIZE; i++)
        for (int j = 1; j*j <= i; j++)
            if (!dp[i - j*j])
            {
                dp[i] = true;
                //break;
            }

    cin >> t;
    while (t--)
    {
        cin >> tmp;
        cout << (dp[tmp] ? "yes" : "no") << endl;
    }

    return 0;
}
