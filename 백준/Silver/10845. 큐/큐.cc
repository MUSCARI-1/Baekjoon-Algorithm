#include<iostream>

#include<vector>

#include<algorithm>

#include<utility>

#include<queue>

using namespace std;

int n;

string str;

queue<int> que;

int card_make()

{

    

    return 0;

}

int solve()

{

    cin >> str;

    if(str=="push")

    {

        int a;

        cin >> a;

        que.push(a);

        return 0;

    }

    else if(str=="pop")

    {

        if(que.size()==0) cout << "-1";

        else

        {

            cout << que.front();

            que.pop();

        }

    }

    else if(str=="size") cout << que.size();

    else if(str=="empty")

    {

        if(que.size()==0) cout << '1';

        else cout << '0';

    }

    else if(str=="front")

    {

        if(que.size()==0)

        {

            cout << "-1";

        }

        else cout<<que.front();

    }

    else if(str=="back")

    {

        if(que.size()==0) cout<<"-1";

        else cout<<que.back();

    }

    cout << "\n";

    return 0;

}

int main()

{

    cin >> n;

    for(int i=0;i<n;i++) solve();

    return 0;

}