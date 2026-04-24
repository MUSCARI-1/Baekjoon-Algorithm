#include <bits/stdc++.h>

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

using namespace std;

int INF=987654321;

int main(){

    FAST_IO;

    long long t,n,m,cnt=0;

    cin>>t>>n;

    vector<long long> a(n);

    for(long long i=0;i<n;i++){

        long long k;

        cin>>k;

        cnt+=k;

        a[i]=cnt;

    }

    cin>>m;

    vector<long long> b(m);

    cnt=0;

    for(long long i=0;i<m;i++){

        long long k;

        cin>>k;

        cnt+=k;

        b[i]=cnt;

    }

    vector<long long> sumA,sumB;

    for(long long i=0;i<n;i++) sumA.push_back(a[i]);

    for(long long i=0;i<m;i++) sumB.push_back(b[i]);

    for(long long i=0;i<n-1;i++){

        for(long long j=i+1;j<n;j++){

            sumA.push_back(a[j]-a[i]);

        }

    }

    for(long long i=0;i<m-1;i++){

        for(long long j=i+1;j<m;j++){

            sumB.push_back(b[j]-b[i]);

        }

    }

    sort(sumA.begin(),sumA.end());

    sort(sumB.begin(),sumB.end(),greater<>());

    long long p1=0,p2=0;

    cnt=0;

    while(p1<sumA.size()&&p2<sumB.size()){

        long long plus=sumA[p1]+sumB[p2];

        if(plus==t){

            long long eqA=1,eqB=1;

            while(p1+1<sumA.size()&&sumA[p1]==sumA[p1+1]){

                p1++;

                eqA++;

            }

            while(p2+1<sumB.size()&&sumB[p2]==sumB[p2+1]){

                p2++;

                eqB++;

            }

            p1++;

            p2++;

            cnt+=eqA*eqB;

        }

        else if(plus>t) p2++;

        else p1++;

    }

    cout<<cnt;

    return 0;

}