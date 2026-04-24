#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
int INF=987654321;

int main(){
    FAST_IO;
    int n,m;
    cin>>n>>m;
    vector<tuple<string,int,string>> file;
    for(int i=0;i<n;i++){
        string s,name,ext;
        cin>>s;
        int p=0;
        while(s[p]!='.'){
            name.push_back(s[p]);
            p++;
        }
        p++;
        while(p!=s.size()){
            ext.push_back(s[p]);
            p++;
        }
        file.push_back({name,1,ext});
    }
    set<string> os;
    for(int i=0;i<m;i++){
        string s;
        cin>>s;
        os.insert(s);
    }
    for(int i=0;i<n;i++){
        string ext=get<2>(file[i]);
        if(os.find(ext)!=os.end()) get<1>(file[i])=0;
    }
    sort(file.begin(),file.end());
    for(int i=0;i<n;i++){
        cout<<get<0>(file[i])<<'.'<<get<2>(file[i])<<"\n";
    }
    return 0;
}