#include<bits/stdc++.h>
using namespace std;
#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main(){
    FAST_IO
    int n,y=0,m=0;
    cin>>n;
    for(int i=0;i<n;i++){
        int time;
        cin>>time;
        y+=10+time/30*10;
        m+=15+time/60*15;
    }
    if(y<m) cout<<'Y'<<' ';
    else if(m<y) cout<<'M'<<' ';
    else cout<<"Y M ";
    cout<<min(y,m);
    return 0;
}