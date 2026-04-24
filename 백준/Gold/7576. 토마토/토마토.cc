#include<iostream>

#include<vector>

#include<algorithm>

#include<utility>

#include<queue>

using namespace std;

int m, n;

vector<vector<int>> box;

vector<vector<int>> cnt;

vector<int> mxm;

queue<pair<int, int>> bfs;

int box_make()

{

    cin >> n >> m;

    box.resize(m);

    cnt.resize(m);

    mxm.resize(m);

    for(int i=0;i<m;i++)

    {

        box[i].resize(n);

        cnt[i].resize(n);

        for(int j=0;j<n;j++)

        {

            cin >> box[i][j];

            if (box[i][j]==1)

            {

                cnt[i][j] = 0;

                bfs.push({i,j});

            }

            else if (box[i][j]==-1)

            {

                cnt[i][j] = -1;

            }

            else cnt[i][j] = 0;

        }

    }

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

        if (nx>=0 && nx<m && ny>=0 && ny<n && cnt[nx][ny]==0 && box[nx][ny]==0)

        {

            bfs.push({nx, ny});

            cnt[nx][ny] = cnt[x][y]+1;

        }

    }

    return 0;

}

int main()

{

    box_make();

    int check=0;

    for(int i=0;i<m;i++)

    {

        for(int j=0;j<n;j++)

        {

            if (box[i][j]==0) check=1;

        }

    }

    if (check==0)

    {

        cout << '0';

        return 0;

    }

    while (bfs.size() != 0)

    {

        solve(bfs.front().first, bfs.front().second);

        if(cnt[bfs.front().first][bfs.front().second]==0)

        {

            cnt[bfs.front().first][bfs.front().second]=1;

        }

        bfs.pop();

    }

    for(int i=0;i<m;i++)

    {

        for(int j=0;j<n;j++)

        {

            if(cnt[i][j]==0)

            {

                cout << "-1";

                return 0;

            }

        }

        mxm[i] = *max_element(cnt[i].begin(), cnt[i].end());

    }

    m = *max_element(mxm.begin(), mxm.end());

    cout << m;

    return 0;

}