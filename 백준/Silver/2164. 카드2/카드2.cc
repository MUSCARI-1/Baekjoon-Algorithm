#include<iostream>

#include<vector>

#include<algorithm>

#include<utility>

#include<queue>

using namespace std;

int n;

queue<int> que;

int card_make()

{

    cin >> n;

    for(int i=1;i<n+1;i++)

    {

        que.push(i);

    }

    return 0;

}

int solve()

{

    int a=-1;

    while(que.size()!=1)

    {

        if(que.size()!=1)

        {

            que.pop();

        }

        if(que.size()!=1)

        {

            a=que.front();

            que.pop();

            que.push(a);

        }

    }

    cout << que.front();

    return 0;

}

int main()

{

    card_make();

    solve();

    return 0;

}