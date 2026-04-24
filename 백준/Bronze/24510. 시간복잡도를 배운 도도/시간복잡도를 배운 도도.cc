#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
int INF=987654321;

int main() {
    FAST_IO;
    int c,res=0;
    cin>>c;
    for(int i=0;i<c;i++){
        int cnt=0;
        string s;
        cin>>s;
        for(int j=0;j<s.size();){
            if(j <= s.size()-3 && s[j] == 'f' && s[j+1] == 'o' && s[j+2] =='r'){
                cnt++;
                j+=3;
            }
            else if(j <= s.size()-5 && s[j] == 'w' && s[j+1] == 'h' && s[j+2] == 'i'
            && s[j+3] == 'l' && s[j+4] == 'e'){
                cnt++;
                j+=5;
            }
            else j++;
        }
        res = max(res,cnt);
    }
    cout<<res<<endl;
    return 0;
}