#include <bits/stdc++.h>
using namespace std;

const int MAXN = 10010;
double PI = 3.14159265359;
double totalArea, maxArea;
int numCylinders, numPieces, radius[MAXN];
double area[MAXN];

bool check(double midArea)
{
    int totalPieces = 0;
    for (int i = 0; i < numCylinders; i++)
        totalPieces += (int)(area[i] / midArea);
    return totalPieces >= numPieces + 1;
}

void solve()
{
    double low = 0.0, high = maxArea, mid = 0;
    while ((high - low) > 1e-6)
    {
        mid = (low + high) / 2;
        if (check(mid)) low = mid;
        else high = mid;
    }
    printf("%.4f\n", low);
}

int main()
{
    int testCases;
    cin >> testCases;

    while (testCases--)
    {
        totalArea = 0.0;
        cin >> numCylinders >> numPieces;
        for (int i = 0; i < numCylinders; i++)
        {
            cin >> radius[i];
            area[i] = radius[i] * radius[i] * PI;
            totalArea += area[i];
        }
        maxArea = totalArea / (numPieces + 1);
        solve();
    }

    return 0;
}