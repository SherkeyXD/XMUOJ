#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x, y, count = 0;
    cin >> x >> y;

    for (int i = x; i <= y; i++)
    {
        int num = i;
        while (num)
        {
            if (num % 10 == 2)
                count++;
            num /= 10;
        }
    }

    cout << count << endl;

    return 0;
}
