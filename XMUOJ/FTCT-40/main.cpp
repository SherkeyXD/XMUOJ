#include <bits/stdc++.h>
using namespace std;

map<char, int> mp;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int p, len, sum = 0;
        string tmp;
        mp.clear();
        cin >> tmp >> p;

        len = tmp.size();

        for (int i = 0; i < len; i++)
        {
            sum += tmp[i] - 'a' + 1;
            mp[tmp[i]]++;
        }

        for (char i = 'z'; i >= 'a'; i--)
        {
            if (sum <= p) break;
            while (mp[i] and sum > p)
            {
                sum -= i - 'a' + 1;
                mp[i]--;
                tmp.erase(tmp.find(i), 1);
            }
        }

        cout << tmp << endl;
        
    }

    return 0;
}