#include<bits/stdc++.h>
using namespace std;
#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

vector<string> box;
int high=0,n;

void check(){
    for(int i=0;i<n;i++){
        char alpha='a';
        int cnt=1;
        for(int j=0;j<n;j++){
            if(j==0) alpha=box[i][0];
            else{
                if(alpha==box[i][j]) {
                    cnt++;
                    high=max(high,cnt);
                }
                else{
                    alpha=box[i][j];
                    high=max(high,cnt);
                    cnt=1;
                }
            }
        }
    }
    for(int i=0;i<n;i++){
        char alpha='a';
        int cnt=1;
        for(int j=0;j<n;j++){
            if(j==0) alpha=box[0][i];
            else{
                if(alpha==box[j][i]) {
                    cnt++;
                    high=max(high,cnt);
                }
                else{
                    alpha=box[j][i];
                    high=max(high,cnt);
                    cnt=1;
                }
            }
        }
    }
}

int main(){
    FAST_IO
    cin>>n;
    box.resize(n);
    for(int i=0;i<n;i++) cin>>box[i];
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1;j++){
            char a=box[i][j],b=box[i][j+1];
            box[i][j]=b;
            box[i][j+1]=a;
            check();
            box[i][j]=a;
            box[i][j+1]=b;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1;j++){
            char a=box[j][i],b=box[j+1][i];
            box[j][i]=b;
            box[j+1][i]=a;
            check();
            box[j][i]=a;
            box[j+1][i]=b;
        }
    }
    cout<<high;
    return 0;
}