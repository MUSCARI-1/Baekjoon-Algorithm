#include<iostream>

#include<vector>

#include<algorithm>

#include<utility>

#include<queue>

#include<stack>

#include<deque>

#include<cmath>

using namespace std;

int n;

vector<vector<int>> map;

vector<vector<bool>> check;

queue<pair<int,int>> point;

vector<int> result;

int cnt=0;

int now=0;

int make()

{

    cin >> n;

    map.resize(n);

    check.resize(n);

    for(int i=0;i<n;i++)

    {

        map[i].resize(n);

        check[i].resize(n);

        string str;

        cin >> str;

        for(int j=0;j<n;j++)

        {

            check[i][j]=0;

            map[i][j]=str[j]-'0';

        }

    }

    

    return 0;

}

int bfs(int x,int y)

{

    int a[4]={1,0,-1,0};

    int b[4]={0,-1,0,1};

    int nx,ny;

    for(int i=0;i<4;i++)

    {

        nx=x+a[i];

        ny=y+b[i];

        if(nx<n && nx>=0 && ny<n && ny>=0 

        && check[nx][ny]==0 && map[nx][ny]==1)

        {

            check[nx][ny]=1;

            point.push({nx,ny});

        }

    }

    

    return 0;

}

int main()

{

    make();

    for(int i=0;i<n;i++)

    {

        for(int j=0;j<n;j++)

        {

            if(check[i][j]==0 && map[i][j]==1)

            {

                cnt++;

                check[i][j]=1;

                point.push({i,j});

                while(point.size()!=0)

                {

                    bfs(point.front().first,point.front().second);

                    point.pop();

                    now++;

                }

                result.push_back(now);

                now=0;

            }

        }

    }

    cout << cnt << endl;

    sort(result.begin(),result.end());

    for(int i=0;i<result.size();i++)

    {

        cout << result[i] << endl;

    }

    return 0;

}