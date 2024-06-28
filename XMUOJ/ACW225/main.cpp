#include <bits/stdc++.h>
using namespace std;

const int MAXN = 65;
int n, k, MOD;
vector<vector<int>> matrix(MAXN, vector<int>(MAXN)), result(MAXN, vector<int>(MAXN));

void multiply(vector<vector<int>> &a, vector<vector<int>> &b)
{
    vector<vector<int>> c(MAXN, vector<int>(MAXN));
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            for (int k = 1; k <= n; k++)
                c[i][j] = ((c[i][j] + a[i][k] * b[k][j]) % MOD + MOD) % MOD;

    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            a[i][j] = c[i][j];
}

void fast_pow(int k)
{
    while (k)
    {
        if (k & 1) multiply(result, matrix);
        k >>= 1;
        multiply(matrix, matrix);
    }
}

int main()
{
    cin >> n >> k >> MOD;
    for (int i = 1; i <= 2 * n; i++)
        for (int j = 1; j <= 2 * n; j++)
        {
            if (i <= n and j <= n)
                cin >> matrix[i][j];
            else if (j - i == n or i > n and i == j)
                matrix[i][j] = 1;
            if (i == j)
                result[i][i] = 1;
        }

    n <<= 1;
    fast_pow(k + 1);
    n >>= 1;

    for (int i = 1; i <= n; i++)
        result[i][i + n] = ((result[i][i + n] - 1) % MOD + MOD) % MOD;

    for (int i = 1; i <= n; i++)
    {
        for (int j = n + 1; j <= 2 * n; j++)
            cout << result[i][j] << " ";
        cout << endl;
    }
    return 0;
}