#include<iostream>

#include<vector>

#include<algorithm>

#include<utility>

#include<queue>

#include<stack>

#include<deque>

#include<cmath>

using namespace std;

int node, line;

int cnt=0;

vector<vector<int>> link;

vector<bool> check;

int input()

{

    cin >> node >> line;

    link.resize(node+1);

    check.resize(node+1);

    for(int i=0;i<line;i++)

    {

        int a, b;

        cin >> a >> b;

        link[a].push_back(b);

        link[b].push_back(a);

    }

    return 0;

}

int dfs(int n)

{

    check[n]=true;

    for(int i=0;i<link[n].size();i++)

    {

        int m=link[n][i];

        if(!check[m])

        {

            cnt++;

            dfs(m);

        }

    }

    return 0;

}

int main()

{

    input();

    dfs(1);

    cout << cnt;

    return 0;

}