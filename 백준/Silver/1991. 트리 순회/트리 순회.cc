#include<bits/stdc++.h>

using namespace std;

#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int n;

vector<vector<int>> tree;

string ans1="\0",ans2="\0",ans3="\0";

string a="?ABCDEFGHIJKLMNOPQRSTUVWXYZ";

void search(int x){

    ans1.push_back(a[x]);

    if(tree[x][0]>0) search(tree[x][0]);

    ans2.push_back(a[x]);

    if(tree[x][1]>0) search(tree[x][1]);

    ans3.push_back(a[x]);

    return;

}

int main(){

    FAST_IO;

    cin>>n;

    tree.resize(n+1);

    for(int i=0;i<n+1;i++) tree[i].resize(2,-1);

    for(int i=0;i<n;i++){

        char k,l,r;

        cin>>k>>l>>r;

        int a=k-64;

        int b=l-64;

        int c=r-64;

        if(b>0) tree[a][0]=b;

        if(c>0) tree[a][1]=c;

    }

    search(1);

    cout<<ans1<<endl<<ans2<<endl<<ans3;

    return 0;

}