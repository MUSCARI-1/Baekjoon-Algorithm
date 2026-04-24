#include <bits/stdc++.h>

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

using namespace std;

int INF=987654321;

int main(){

    FAST_IO;

    int n,m,cnt=0;

    cin>>n>>m;

    vector<int> v(n+2,0);

    for(int i=1;i<=n;i++) cin>>v[i];

    for(int i=1;i<=n;i++){

        if(v[i]==1){

            cnt++;

            while(v[i]==1) i++;

        }

    }

    for(int i=0;i<m;i++){

        int k;

        cin>>k;

        if(k==0) cout<<cnt<<"\n";

        else{

            int j;

            cin>>j;

            if(v[j]==1) continue;

            else{

                v[j]=1;

                int sum=0;

                if(v[j-1]==1) sum++;

                if(v[j+1]==1) sum++;

                if(sum==0) cnt++;

                else if(sum==2) cnt--;

            }

        }

    }

    return 0;

}