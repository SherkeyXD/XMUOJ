#include <bits/stdc++.h>
using namespace std;

const int N = 200005;

int main()
{
    int n;
    cin >> n;

    int tmp;
    int cnt = 0;
    for (int i = 1; i <= n; i++)  {
        cin >> tmp;
        cnt += __builtin_ctz(tmp);
    }

    int pow[20];
    pow[0] = 1;
    for (int i = 1; i < 20; i++)
        pow[i] = pow[i - 1] * 2;
    
    int left = n - cnt, ans = 0;
    int c[20] = {0};
    int max = 19, sum = 0;
    while (pow[max] > n)  max--;
    for (int i = max; i > 0; i--)  {
        c[i] = n / pow[i] - sum;
        sum += c[i];
    }
    
    while (left > 0) {
        int tmp = left;
        while (tmp > 0 and (tmp > max or c[tmp] < 1))  tmp--;
        if (tmp == 0) {
            ans = -1;
            break;
        }
        left -= tmp; 
        c[tmp] --;
        ans ++;
    }
    cout << ans;

    return 0;
}