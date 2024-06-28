#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> cost1(n), cost2(n), transfer1(n), transfer2(n);
    for (int i = 0; i < n; i++) cin >> cost1[i];
    for (int i = 0; i < n; i++) cin >> cost2[i];
    for (int i = 0; i < n-1; i++) cin >> transfer1[i];
    for (int i = 0; i < n-1; i++) cin >> transfer2[i];

    int entry1, entry2, exit1, exit2;
    cin >> entry1 >> entry2 >> exit1 >> exit2;

    vector<int> dp1(n), dp2(n);
    dp1[0] = entry1 + cost1[0];
    dp2[0] = entry2 + cost2[0];

    for (int i = 1; i < n; i++) {
        dp1[i] = min(dp1[i-1] + cost1[i], dp2[i-1] + transfer2[i-1] + cost1[i]);
        dp2[i] = min(dp2[i-1] + cost2[i], dp1[i-1] + transfer1[i-1] + cost2[i]);
    }

    cout << min(dp1[n-1] + exit1, dp2[n-1] + exit2) << endl;

    return 0;
}