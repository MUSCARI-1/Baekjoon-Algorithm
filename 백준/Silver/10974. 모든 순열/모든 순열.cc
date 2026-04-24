#include<bits/stdc++.h>

using namespace std;

#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main(){

    FAST_IO;

    int n;

    cin>>n;

    vector<int> num;

    for(int i=1;i<=n;i++) num.push_back(i);

    do{

        for(auto x:num) cout<<x<<" ";

        cout<<"\n";

    }

    while(next_permutation(num.begin(),num.end()));

    return 0;

}