#include<bits/stdc++.h>

using namespace std;

#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main(){

    FAST_IO;

    int n,k;

    cin>>n;

    vector<int> v(n+1);

    for(int i=0;i<=n;i++) cin>>v[i];

    cin>>k;

    bool stable=1;

    int point=-1;

    for(int i=0;i<=n;i++){

        if(v[i]==1){

            stable=0;

            point=i;

            break;

        }

    }

    if(stable){

        for(int i=0;i<=n-k;i++){

            if(v[i]>2&&v[i+k]!=0){

                cout<<"YES"<<endl;

                cout<<i<<" "<<i+k;

                return 0;

            }

        }

        cout<<"NO";

        return 0;

    }

    v[point]=2;

    bool c=0;

    if(point-k>=0&&v[point-k]>0){

        v[point-k]--;

        c=1;

        for(int i=0;i<=n;i++){

            if(v[i]==1){

                c=0; 

                break;

            }

        }

        if(c){

            cout<<"YES"<<endl;

            cout<<point-k<<" "<<point;

            return 0;

        }

        v[point-k]++;

    }

    v[point]=0;

    if(point+k<=n){

        v[point+k]++;

        c=1;

        for(int i=0;i<=n;i++){

            if(v[i]==1){

                c=0;

                break;

            }

        }

        if(c){

            cout<<"YES"<<endl;

            cout<<point<<" "<<point+k;

            return 0;

        }

    }

    cout<<"NO";

    return 0;

}