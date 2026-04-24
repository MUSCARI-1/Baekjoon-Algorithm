#include<iostream>

#include<vector>

#include<algorithm>

#include<utility>

#include<queue>

#include<stack>

using namespace std;

int n;

string str;

stack<int> stk;

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

        stk.push(a);

        return 0;

    }

    else if(str=="pop")

    {

        if(stk.size()==0) cout << "-1";

        else

        {

            cout << stk.top();

            stk.pop();

        }

    }

    else if(str=="size") cout << stk.size();

    else if(str=="empty")

    {

        if(stk.size()==0) cout << '1';

        else cout << '0';

    }

    else if(str=="top")

    {

        if(stk.size()==0)

        {

            cout << "-1";

        }

        else cout<<stk.top();

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