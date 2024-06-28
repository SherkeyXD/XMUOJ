#include <bits/stdc++.h>
using namespace std;

// Ref: https://blog.csdn.net/matafeiyanll/article/details/105674159

int get_single_sum(int x)
{
    int s = 0;
    while (x)
        s += x % 10, x /= 10;
    return s;
}

int sum(int thread, int row, int col)
{
    int ans = 0;
    if (get_single_sum(row) + get_single_sum(col) <= thread)
        ans = 1;
    return ans;
}

bool check(int thread, int rows, int cols, int row, int col, char *visited)
{
    bool checkAns = false;
    if (row >= 0 and col >= 0 and row < rows and col < cols and !visited[row * cols + col] and sum(thread, row, col))
        checkAns = true;
    return checkAns;
}

int BFS(int thread, int rows, int cols, int row, int col, char *visited)
{
    int count = 0;
    if (check(thread, rows, cols, row, col, visited))
    {
        visited[row * cols + col] = 1;
        count = 1 + BFS(thread, rows, cols, row - 1, col, visited) + BFS(thread, rows, cols, row + 1, col, visited) + BFS(thread, rows, cols, row, col - 1, visited) + BFS(thread, rows, cols, row, col + 1, visited);
    }
    return count;
}

int Count(int thread, int rows, int cols)
{
    if (thread < 0 or rows < 1 or cols < 1)
        return 0;
    char *visited = (char *)malloc((rows * cols) * sizeof(char));
    memset(visited, 0, (rows * cols) * sizeof(char));
    int count = BFS(thread, rows, cols, 0, 0, visited);
    free(visited);
    return count;
}

int main()
{
    int rows, cols, thread, ans;
    cin >> thread >> rows >> cols;
    ans = Count(thread, rows, cols);
    cout << ans;
    return 0;
}
