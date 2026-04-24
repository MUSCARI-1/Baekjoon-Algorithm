#include<bits/stdc++.h>
using namespace std;
#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main(){
    FAST_IO
    vector<vector<int>> dp(1001);
    for(int i=0;i<1001;i++)
        dp[i].resize(1001,0);
    string str1,str2;
    cin>>str1>>str2;
    int s1=str1.length(),s2=str2.length();
    str1[0]==str2[0]?dp[0][0]=1:dp[0][0]=0;
    for(int i=1;i<s1;i++)
        if(str2[0]==str1[i]||dp[0][i-1]==1) dp[0][i]=1;
    for(int i=1;i<s2;i++)
        if(str1[0]==str2[i]||dp[i-1][0]==1) dp[i][0]=1;
    for(int i=1;i<s2;i++){
        for(int j=1;j<s1;j++){
            int leftup=dp[i-1][j-1],up=dp[i-1][j],left=dp[i][j-1];
            if(str2[i]==str1[j]) leftup+=1;
            if(leftup>left&&leftup>up) dp[i][j]=leftup;
            else if(left>up) dp[i][j]=left;
            else dp[i][j]=up;
        }
    }
    int a=s2-1,b=s1-1;
    int cnt=dp[a][b];
    if(cnt==0){
        cout<<cnt;
        return 0;
    }
    string res="";
    while(dp[a][b]!=0){
        if(a==0){
            res+=str2[0];
            break;
        }
        else if(b==0){
            res+=str1[0];
            break;
        }
        else if(dp[a-1][b]==dp[a][b]) a--;
        else if(dp[a][b-1]==dp[a][b]) b--;
        else{
            a--;
            b--;
            res+=str2[a+1];
        }
    }
    cout<<cnt<<endl;
    for(int i=res.length()-1;i>=0;i--) cout<<res[i];
    return 0;
}