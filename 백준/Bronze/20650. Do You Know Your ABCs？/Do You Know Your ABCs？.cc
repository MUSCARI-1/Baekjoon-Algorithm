#include<bits/stdc++.h>
using namespace std;
#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);


int main() {
    FAST_IO;
    vector<int> v(7);
    for(int i = 0;i < 7;i++) cin>>v[i];
    sort(v.begin(),v.end());
    for(int i=0;i<7;i++){
        for(int j=i+1;j<7;j++){
            for(int l=j+1;l<7;l++){
                int a=v[i],b=v[j],c=v[l];
                vector<int> check;
                check.push_back(a);
                check.push_back(b);
                check.push_back(c);
                check.push_back(a+b);
                check.push_back(b+c);
                check.push_back(a+c);
                check.push_back(a+b+c);
                int p=0;
                sort(check.begin(),check.end());
                for(int k=0;k<7;k++){
                    if(v[k]!=check[k]) p=1;
                }
                if(p==0){
                    cout<<a<<" "<<b<<" "<<c;
                    return 0;
                }
            }
        }
    }
}