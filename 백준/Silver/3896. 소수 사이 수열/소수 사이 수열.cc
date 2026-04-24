#include<bits/stdc++.h>

using namespace std;

#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

vector<bool> era(1299710,1);

vector<int> prime;

void eratos(){

    era[0]=0;

    era[1]=0;

    for(int i=2;i<=1100;i++){

        if(!era[i]) continue;

        for(int j=i+i;j<=1299709;j+=i){

            era[j]=0;

        }

    }

    for(int i=0;i<=1299709;i++) if(era[i]) prime.push_back(i);

    return;

}

int solve(int k){

    int L=0;

    int R=prime.size()-1;

    int low=prime[0],high=prime[R];

    while(L<=R){

        int mid=(L+R)/2;

        if(prime[mid]==k) return 0;

        else if(prime[mid]>k){

            high=prime[mid];

            R=mid-1;

        }

        else{

            low=prime[mid];

            L=mid+1;

        }

    }

    int res=high-low;

    return res;

}

int main(){

    FAST_IO;

    eratos();

    int n,a;

    cin>>n;

    for(int i=0;i<n;i++){

        cin>>a;

        cout<<solve(a)<<"\n";

    }

    return 0;

}