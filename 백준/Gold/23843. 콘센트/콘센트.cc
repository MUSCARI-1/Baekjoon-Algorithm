#include<bits/stdc++.h>

using namespace std;

#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main(){

    FAST_IO;

    int n,m;

    int cnt=0;

    cin>>n>>m;

    vector<int> div(n);

    vector<int> con(m);

    for(int i=0;i<n;i++) cin>>div[i];

    sort(div.begin(),div.end(),greater<>());

    if(n<=m) cout<<div[0];

    else{

        for(int i=0;i<m;i++) con[i]=div[i];

        for(int i=m;i<=n;i++){

            sort(con.begin(),con.end());

            if(i==n){

                cnt+=con[m-1];

                cout<<cnt;

                return 0;

            }

            else if(con[0]!=0){

                for(int j=1;j<m;j++) con[j]-=con[0];

                cnt+=con[0];

            }

            con[0]=div[i];

        }

    }

    return 0;

}