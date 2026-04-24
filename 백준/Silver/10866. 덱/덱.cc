#include<iostream>

#include<vector>

#include<algorithm>

#include<utility>

#include<queue>

#include<stack>

#include<deque>

using namespace std;

int n;

string str;

deque<int> deq;

int card_make()

{

    

    return 0;

}

int solve()

{

    cin >> str;

    if(str=="push_front")

    {

        int a;

        cin >> a;

        deq.push_front(a);

        return 0;

    }

    else if(str=="push_back")

    {

        int b;

        cin >> b;

        deq.push_back(b);

        return 0;

    }

    else if(str=="pop_front")

    {

        if(deq.size()==0) cout << "-1";

        else

        {

            cout << deq.front();

            deq.pop_front();

        }

    }

    else if(str=="pop_back")

    {

        if(deq.size()==0) cout<<"-1";

        else

        {

            cout << deq.back();

            deq.pop_back();

        }

    }

    else if(str=="size") cout << deq.size();

    else if(str=="empty")

    {

        if(deq.size()==0) cout << '1';

        else cout << '0';

    }

    else if(str=="front")

    {

        if(deq.size()==0)

        {

            cout << "-1";

        }

        else cout<<deq.front();

    }

    else if(str=="back")

    {

        if(deq.size()==0) cout<<"-1";

        else cout<<deq.back();

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