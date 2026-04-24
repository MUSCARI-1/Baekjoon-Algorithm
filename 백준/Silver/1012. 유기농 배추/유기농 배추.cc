#include<iostream>

#include<vector>

using namespace std;

int m, n, num, total_case;

int cnt = 0;

vector<vector<int>> box;

int make()

{

    cin >> m >> n >> num;

    box.resize(m);

    for (int i=0;i<m;i++)

    {

        box[i].resize(n);

    }

    for (int i=0;i<m;i++)

    {

        for (int j=0;j<n;j++)

        {

            box[i][j] = 0;

        }

    }

    for (int i=0;i<num;i++)

    {

        int a, b;

        cin >> a >> b;

        box[a][b] = 1;

    }

    return 0;

}

int solve(int x, int y)

{

    int nx, ny;

    int xx[4] = {1,0,-1,0};

    int yy[4] = {0,-1,0,1};

    box[x][y] = 0;

    for (int i=0;i<4;i++)

    {

        nx = x + xx[i];

        ny = y + yy[i];

        if (nx<0 || nx>m-1 || ny<0 || ny>n-1) continue;

        if (box[nx][ny] == 1)

        {

            solve(nx, ny);

        }

    }

    return 0;

}

int main()

{

    cin >> total_case;

    for (int i=0;i<total_case;i++)

    {

        make();

        for (int a=0;a<m;a++)

        {

            for (int b=0;b<n;b++)

            {

            if (box[a][b] == 1)

                {

                solve(a, b);

                cnt++;

                }

            }

        }

        cout << cnt << "\n";

        cnt = 0;

    }

    return 0;

}