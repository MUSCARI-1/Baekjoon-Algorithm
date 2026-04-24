#include <bits/stdc++.h>
using namespace std;
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
int INF=123456789;
long long cnt=0;
vector<int> people(3),ticket(3);
bool dif=true;

void check(){
    while(dif){
        dif=false;
        if(people[0]==0&&people[1]==0&&people[2]==0) break;
        for(int i=0;i<3;i++){
            if(people[i]!=0&&ticket[i]!=0){
                dif=true;
                if(people[i]>ticket[i]){
                    cnt+=ticket[i];
                    people[i]-=ticket[i];
                    ticket[i]=0;
                }
                else{
                    cnt+=people[i];
                    ticket[i]-=people[i];
                    people[i]=0;
                }
            }
            else if(people[i]==0&&ticket[i]>=3){
                dif=true;
                if(i==2){
                    ticket[0]+=ticket[i]/3;
                    ticket[i]%=3;
                }
                else{
                    ticket[i+1]+=ticket[i]/3;
                    ticket[i]%=3;
                }
            }
        }
    }
}

int main(){
    for(int i=0;i<3;i++) cin>>people[i];
    for(int i=0;i<3;i++) cin>>ticket[i];
    check();
    cout<<cnt<<endl;
    return 0;
}
