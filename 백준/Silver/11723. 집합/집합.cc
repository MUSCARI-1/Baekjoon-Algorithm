#include<iostream>

#include<vector>

#include<algorithm>

#include<utility>

#include<queue>

#include<stack>

#include<deque>

#include<set>

#include<cmath>

#include<string>

using namespace std;

int n, x;

string str;

set<int> a;

int make()

{

    

    return 0;

}

int solve()

{

    

    return 0;

}

int main()

{

    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    cin>>n;

    for(int i=0;i<n;i++)

    {

        cin>>str;

        if(str=="add")

        {

            cin>>x;

            if(a.count(x)==0) a.insert(x);

        }

        else if(str=="remove")

        {

            cin>>x;

            if(a.count(x)==1) a.erase(x);

        }

        else if (str == "check")

        {

            cin >> x;

            cout << (a.find(x) != a.end()) << '\n';

        }

        else if (str == "toggle") 

        {

            cin >> x;

            if (a.find(x) != a.end())

            {

                a.erase(x);

            }

            else a.insert(x);

        }

        else if(str=="all")

        {

            a={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};

        }

        else

        {

            a.clear();

        }

    }

    return 0;

}