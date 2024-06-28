#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    while (n--)
    {
        int m;
        cin >> m;

        bool is_prime = true;
        for (int i = 2; i <= sqrt(m); i++)
        {
            if (m % i == 0)
            {
                is_prime = false;
                break;
            }
        }

        if (is_prime)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }


    return 0;
}
