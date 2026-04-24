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

int n,m,z,num1,num2;

vector<int> a;

int make(){

    cin >> n >> m;

    a.resize(n+1);

    a[0]=0;

    for(int i=1;i<n+1;i++){

        cin >> z;

        a[i]=z+a[i-1];

    }

    return 0;

}

int solve(){

    

    return 0;

}

int main(){

    ios_base::sync_with_stdio(false);

    cin.tie(nullptr);

    make();

    for(int i=0;i<m;i++){

        cin >> num1 >> num2;

        int cnt=a[num2]-a[num1-1];

        cout << cnt << "\n";

    }

    return 0;

}