#include <bits/stdc++.h>

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

using namespace std;

int INF=987654321;

int main(){

    FAST_IO;

    int n,cnt=0;

    cin>>n;

    for(int i=2023;i<=n;i++){

        string s=to_string(i);

        int p1=0,p2=0;

        string c="2023";

        while(p1<s.size()){

            if(s[p1]==c[p2]) p2++;

            if(p2==4) break;

            p1++;

        }

        if(p2==4){

            cnt++;

        }

    }

    cout<<cnt;

    return 0;

}