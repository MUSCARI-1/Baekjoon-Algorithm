#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
int INF=987654321;

int main(){
    FAST_IO;
    int a,b,c;
    cin>>a>>b>>c;
    if(a==60&&b==60&&c==60) cout<<"Equilateral"<<endl;
    else if(a+b+c==180){
        if(a==b||b==c||c==a) cout<<"Isosceles"<<endl;
        else cout<<"Scalene"<<endl;
    }
    else cout<<"Error"<<endl;
    return 0;
}