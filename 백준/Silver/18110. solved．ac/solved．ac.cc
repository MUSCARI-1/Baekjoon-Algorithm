#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    if(n==0){
        cout<<'0';
        return 0;
    }
    int a=n*15/100;
    int b=(n*15)%100;
    if(b>=50) a+=1;
    b=n-a*2;
    vector<int> dif(n);
    for(int i=0;i<n;i++) cin>>dif[i];
    sort(dif.begin(),dif.end());
    int sum=0;
    for(int i=a;i<b+a;i++) sum+=dif[i];
    int c=sum/b;
    int d=sum%b;
    if(d*2>=b) c++;
    cout<<c;
    return 0;
}
