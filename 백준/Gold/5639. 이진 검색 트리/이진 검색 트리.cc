#include<bits/stdc++.h>

using namespace std;

#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

vector<int> preorder;

void tree(int l,int r){

    int root=preorder[l],mid=r;

    if(l==r+1){

        cout<<root<<"\n";

        return;

    }

    else if(l>=r) return;

    for(int i=l;i<r;i++){

        if(root<preorder[i]){

            mid=i;

            break;

        }

    }

    tree(l+1,mid);

    tree(mid,r);

    cout<<root<<"\n";

    return;

}

int main(){

    FAST_IO;

    int n;

    while(cin>>n){

        preorder.push_back(n);

    }

    tree(0,preorder.size());

    return 0;

}