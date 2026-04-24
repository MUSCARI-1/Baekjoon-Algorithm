#include<bits/stdc++.h>
using namespace std;
#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

vector<int> eratos(1'000'001,1);
vector<int> prime;

int era(){
    for(int i=2;i<=1'000;i++){
        if(eratos[i]==0) continue;
        for(int j=i*2;j<1'000'001;j+=i) eratos[j]=0;
    }
    for(int i=3;i<1'000'000;i++) if(eratos[i]==1) prime.push_back(i);
    return 0;
}

int main(){
    FAST_IO
    era();
    while(1){
        int n,c=0;
        cin>>n;
        if(n==0) break;
        for(int i=0;prime.size();i++){
            int k=n-prime[i];
            if(eratos[k]==1){
                cout<<n<<" = "<<prime[i]<<" + "<<k<<"\n";
                c=1;
                break;
            }
        }
        if(c==0) cout<<"Goldbach's conjecture is wrong."<<"\n";
    }
    return 0;
}