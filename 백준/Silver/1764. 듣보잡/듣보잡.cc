#include<iostream>

#include<vector>

#include<algorithm>

#include<utility>

#include<queue>

#include<stack>

#include<deque>

#include<cmath>

#include<string>

using namespace std;

int n,m;

vector<string> dud;

vector<string> bo;

vector<string> dudbo;

string now;

int make()

{

    cin >> n >> m;

    dud.resize(n);

    bo.resize(m);

    for(int i=0;i<n;i++) cin >> dud[i];

    for(int i=0;i<m;i++) cin >> bo[i];

    return 0;

}

int solve()

{

    sort(dud.begin(),dud.end());

    sort(bo.begin(),bo.end());

    for(int i=0;i<n;i++)

    {

        now=dud[i];

        if(binary_search(bo.begin(),bo.end(),now)) dudbo.push_back(now);

    }

    sort(dudbo.begin(),dudbo.end());

    cout << dudbo.size() << endl;

    for(int i=0;i<dudbo.size();i++) cout<<dudbo[i]<<endl;

    return 0;

}

int main()

{

    make();

    solve();

    return 0;

}