#include <bits/stdc++.h>
using namespace std;
#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main(){
    FAST_IO;
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++){
		cout<<s[i];
		if(i%10==9) cout<<endl;
	}
    return 0;
}