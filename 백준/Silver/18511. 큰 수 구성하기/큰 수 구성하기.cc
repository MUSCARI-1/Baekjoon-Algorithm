#include <bits/stdc++.h>
using namespace std;
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
int INF=123456789;

int check(int n,vector<int> v){
    int a=n;
    while(a>0){
        int num=a%10;
        if(num==v[0]||num==v[1]||num==v[2]) a/=10;
        else return 0;
    }
    return 1;
}

int main(){
    int n,k,res=-1;
    cin>>n>>k;
    vector<int> v(3,INF);
    for(int i=0;i<k;i++) cin>>v[i];
    while(1){
        int num=n%10;
        if(num!=v[0]&&num!=v[1]&&num!=v[2]){
            n--;
            continue;
        }
        int a=check(n,v);
        if(a==1||n<0) break;
        else n--;
    }
    cout<<n<<endl;
    return 0;
}
