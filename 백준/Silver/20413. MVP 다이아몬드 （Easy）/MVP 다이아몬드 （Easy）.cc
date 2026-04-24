#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
int INF=987654321;

int main(){
    FAST_IO;
    int n,cnt=0;
    cin>>n;
    vector<int> mvp(4),cash(n,-1);
    for(int i=0;i<4;i++) cin>>mvp[i];
    string s;
    cin>>s;
    for(int i=0;i<n;i++){
        if(i==0){
            char c=s[0];
            if(c=='B') cash[0]=mvp[0]-1;
            else if(c=='S') cash[0]=mvp[1]-1;
            else if(c=='G') cash[0]=mvp[2]-1;
            else if(c=='P') cash[0]=mvp[3]-1;
            else cash[0]=mvp[3];
        }
        if(s[i]=='B') cash[i]=mvp[0]-cash[i-1]-1;
        else if(s[i]=='S') cash[i]=mvp[1]-cash[i-1]-1;
        else if(s[i]=='G') cash[i]=mvp[2]-cash[i-1]-1;
        else if(s[i]=='P') cash[i]=mvp[3]-cash[i-1]-1;
        else if(s[i]=='D') cash[i]=mvp[3];
    }
    for(int i=0;i<n;i++) cnt+=cash[i];
    cout<<cnt;
    return 0;
}