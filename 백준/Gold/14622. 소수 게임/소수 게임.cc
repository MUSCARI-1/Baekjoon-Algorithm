#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

vector<bool> era(5000001,1);
vector<bool> use(5000001,0);
priority_queue<int> d,k;
long long dae=0,kyu=0;
int n;

void erato(){
    era[0]=0;
    era[1]=0;
    for(int i=2;i<=2237;i++){
        if(!era[i]) continue;
        int x=i+i;
        while(x<=5000000){
            era[x]=0;
            x+=i;
        }
    }
    return;
}

int main(){
    FAST_IO;
    cin>>n;
    erato();
    for(int i=1;i<=2*n;i++){
        int a;
        cin>>a;
        if(era[a]){
            if(use[a]){
                if(i%2!=0) dae-=1000;
                else kyu-=1000;
            }
            else{
                use[a]=1;
                if(i%2!=0) d.push(a);
                else k.push(a);
            }
        }
        else{
            int t1,t2;
            if(i%2!=0){
                if(k.size()<3) kyu+=1000;
                else{
                    t1=k.top();
                    k.pop();
                    t2=k.top();
                    k.pop();
                    kyu+=k.top();
                    k.push(t1);
                    k.push(t2);
                }
            }
            else{
                if(d.size()<3) dae+=1000;
                else{
                    t1=d.top();
                    d.pop();
                    t2=d.top();
                    d.pop();
                    dae+=d.top();
                    d.push(t1);
                    d.push(t2);
                }
            }
        }
    }
    if(dae>kyu) cout<<"소수의 신 갓대웅";
    else if(dae<kyu) cout<<"소수 마스터 갓규성";
    else cout<<"우열을 가릴 수 없음";
    return 0;
}