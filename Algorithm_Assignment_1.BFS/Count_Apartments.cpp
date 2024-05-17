/*

*/

#include <bits/stdc++.h>
using namespace std;
const int n = 1001;
int step[n][n];
int visited[n][n];
int dx[4] = {0, 0, -1, 1};
int dy[4] = {1, -1, 0, 0};
int N, m;
bool valid(int x, int y)
{
    return !visited[x][y] && step[x][y] != 1 && x >= 0 && x < N && y >= 0 && y < m;
}

// void bfs(int i, int j)
void bfs(pair<int, int> src)
{
    queue<pair<int, int>> q;
    // pair<int, int> src(i, j);
    q.push(src);
    visited[src.first][src.second] = true;
    // cout << src.first << " " << src.second << endl;
    while (!q.empty())
    {
        auto parent = q.front();
        q.pop();
        int x = parent.first;
        int y = parent.second;
        for (int i = 0; i < 4; i++)
        {
            int new_x = x + dx[i];
            int new_y = y + dy[i];
            if (valid(new_x, new_y))
            {
                q.push({new_x, new_y});
                visited[new_x][new_y] = true;
            }
        }
    }
}

int main()
{
    cin >> N >> m;
    pair<int, int> src, dst;
    int cnt = 0;
    for (int i = 0; i < N; i++)
    {
        string s;
        cin >> s;
        for (int j = 0; j < m; j++)
        {

            if (s[j] == '#')
                step[i][j] = 1;
            if (s[j] == '.')
                step[i][j] = 0;
        }
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (step[i][j] == 0 && !visited[i][j])
            {
                // bfs(i, j);
                pair<int, int> src(i, j);
                bfs(src);
                cnt++;
            }
        }
    }

    cout << cnt << endl;

    return 0;
}
