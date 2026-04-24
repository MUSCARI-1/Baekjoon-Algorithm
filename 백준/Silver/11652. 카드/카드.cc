#include<bits/stdc++.h>

using namespace std;

#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int INF=1234567890;

int main(){

    FAST_IO;

    long long n,back,cnt=1,now=1;

    cin>>n;

    vector<long long> v(n);

    for(int i=0;i<n;i++) cin>>v[i];

    sort(v.begin(),v.end());

    back=v[0];

    long long manynum=v[0];

    for(int i=1;i<n;i++){

        if(back==v[i]){

            now++;

            if(now>cnt){

                cnt=now;

                manynum=back;

            }

        }

        else{

            back=v[i];

            now=1;

        }

    }

    cout<<manynum;

    return 0;

}