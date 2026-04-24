#include<iostream>

#include<vector>

#include<algorithm>

#include<utility>

#include<queue>

using namespace std;

int n, m;

vector<vector<int>> maze;

vector<vector<int>> cnt;

queue<pair<int, int>> bfs;

int maze_make()

{

    cin >> n >> m;

    string str;

    maze.resize(n);

    cnt.resize(n);

    for(int i=0;i<n;i++)

    {

        cin >> str;

        maze[i].resize(m);

        cnt[i].resize(m);

        for(int j=0;j<m;j++)

        {

            maze[i][j] = str[j]-'0';

            cnt[i][j] = -1;

        }

    }

    cnt[0][0] = 1;

    bfs.push({0, 0});

    return 0;

}

int solve(int x,int y)

{

    int a[4] = {1,0,-1,0};

    int b[4] = {0,-1,0,1};

    for (int i=0;i<4;i++)

    {

        int nx = x + a[i];

        int ny = y + b[i];

        if (nx>=0 && nx<n && ny>=0 && ny<m && cnt[nx][ny]==-1 && maze[nx][ny]==1)

        {

            bfs.push({nx, ny});

            cnt[nx][ny] = cnt[x][y]+1;

        }

    }

    return 0;

}

int main()

{

    maze_make();

    while (cnt[n-1][m-1]==-1)

    {

        solve(bfs.front().first, bfs.front().second);

        bfs.pop();

    }

    cout << cnt[n-1][m-1];

    return 0;

}