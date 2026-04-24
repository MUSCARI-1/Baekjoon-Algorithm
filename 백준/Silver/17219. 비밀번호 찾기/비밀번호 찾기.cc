#include<iostream>

#include<vector>

#include<algorithm>

#include<utility>

#include<queue>

#include<stack>

#include<deque>

#include<set>

#include<map>

#include<cmath>

#include<string>

using namespace std;

int n,m;

string a,b;

map<string,string> pw;

map<string,string>::iterator iter;

int make(){

    cin >> n >> m;

    for(int i=0;i<n;i++){

        cin >> a >> b;

        pw.insert(pair<string,string>(a,b));

    }

    return 0;

}

int solve(){

    for(int i=0;i<m;i++){

        cin >> a;

        iter=pw.lower_bound(a);

        cout << iter->second << "\n";

    }

    return 0;

}

int main(){

    

    ios::sync_with_stdio(false);

    cin.tie(NULL);

    make();

    solve();

    return 0;

}