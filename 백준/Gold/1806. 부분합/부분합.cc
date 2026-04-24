#include<bits/stdc++.h>

using namespace std;

#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main(){

    FAST_IO;

    int n,s;

    cin>>n>>s;

    vector<int> num(n);

    for(int i=0;i<n;i++) cin>>num[i];

    int sum=0;

    int cnt=0;

    int result=0;

    int p1=0;

    int p2=0;

    while(p1>-2){

        if(p1>=n&&sum<s) break;

        if(sum>=s){

            sum-=num[p2];

            p2++;

            cnt--;

            if(sum>=s){

                if(result>cnt||result==0) result=cnt;

            }

        }

        else{

            sum+=num[p1]; //

            p1++;

            cnt++;

            if(sum>=s){

                if(result>cnt||result==0) result=cnt;

            }

        }

    }

    cout<<result;

    return 0;

}