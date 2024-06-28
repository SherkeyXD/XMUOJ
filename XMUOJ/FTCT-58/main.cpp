#include <bits/stdc++.h>
using namespace std;

class GameSolver
{
private:
    int numPairs;
    vector<int> firstNumbers, secondNumbers;
    vector<bool> visited;
    map<long long, bool> dpCache;

public:
    GameSolver()
    {
        cin >> numPairs;
        firstNumbers.resize(numPairs);
        secondNumbers.resize(numPairs);
        visited.resize(numPairs, false);
        for (int i = 0; i < numPairs; i++)
            cin >> firstNumbers[i] >> secondNumbers[i];
    }

    bool isWinPossible(long long currentState)
    {
        if (dpCache.find(currentState) != dpCache.end())
            return dpCache[currentState];
        if (currentState == 0)
            return dpCache[currentState] = false;
        for (int i = 0; i < numPairs; i++)
        {
            if (currentState & (1LL << i))
            {
                for (int j = i + 1; j < numPairs; j++)
                    if (currentState & (1LL << j) and
                        (firstNumbers[i] == firstNumbers[j] or secondNumbers[i] == secondNumbers[j]))
                    {
                        long long nextState = currentState & ~(1LL << i) & ~(1LL << j);
                        if (!isWinPossible(nextState))
                            return dpCache[currentState] = true;
                    }
            }
        }
        return dpCache[currentState] = false;
    }

    void solveGame()
    {
        long long initialState = (1LL << numPairs) - 1;
        cout << (isWinPossible(initialState) ? "YES" : "NO") << endl;
    }
};

int main()
{
    GameSolver solver;
    solver.solveGame();
    return 0;
}