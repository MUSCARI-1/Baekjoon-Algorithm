#include<bits/stdc++.h>

using namespace std;

#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main(){

    FAST_IO;

    int res=0;

    vector<int> v(3);

    vector<bool> pos(12,0);

    string s;

    cin>>s>>v[0]>>v[1]>>v[2];

    for(int i=0;i<12;i++){

        if(s[i]=='Y') pos[i]=1;

    }

    for(int i=0;i<6;i++){

        if(!pos[i]) continue;

        int cnt=0;

        for(int j=0;j<3;j++) if(v[j]==i+1) cnt++;

        int total=(cnt+2)*(i+1);

        res=max(total,res);

    }

    vector<int> num(7,0);

    for(int i=0;i<3;i++) num[v[i]]++;

    if(pos[6]){

        int posNum=-1,total=0;

        for(int i=1;i<7;i++) if(num[i]>=2) posNum=i;

        if(posNum!=-1) total=posNum*4;

        res=max(total,res);

    }

    if(pos[7]){

        bool c3=0;

        bool c2=0;

        int x,y,total=0;

        for(int i=1;i<7;i++){

            if(num[i]==3){

                x=i;

                c3=1;

                if(x==6) total=x*3+10;

                else total=x*3+12;

            }

            else if(num[i]==2){

                c2=1;

                x=i;

            }

        }

        if(!c3&&c2){

            for(int i=1;i<7;i++) if(num[i]==1) y=i;

            if(x>y) total=x*3+y*2;

            else total=x*2+y*3;

        }

        res=max(res,total);

    }

    if(pos[8]){

        bool check=1;

        for(int i=1;i<7;i++) if(num[i]>1) check=0;

        if(num[6]!=0) check=0;

        if(check) res=max(res,30);

    }

    if(pos[9]){

        bool check=1;

        for(int i=1;i<7;i++) if(num[i]>1) check=0;

        if(num[1]!=0) check=0;

        if(check) res=max(res,30);

    }

    if(pos[10]){

        bool check=0;

        for(int i=1;i<7;i++) if(num[i]==3) check=1;

        if(check) res=50;

    }

    if(pos[11]){

        int total=v[0]+v[1]+v[2]+12;

        res=max(res,total);

    }

    cout<<res;

    return 0;

}