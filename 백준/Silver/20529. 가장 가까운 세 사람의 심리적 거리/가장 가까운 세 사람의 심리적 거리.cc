#include<bits/stdc++.h>
using namespace std;
#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int solve(){
    vector<string> mbti={"ISTJ","ISFJ","INFJ","INTJ","ISTP","ISFP","INFP","INTP","ESTP","ESFP","ENFP","ENTP","ESTJ","ESFJ","ENFJ","ENTJ"};
    vector<int> mbtiCnt(16,0);
    int n,least=99999;
    cin>>n;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        for(int j=0;j<16;j++) if(s==mbti[j]) mbtiCnt[j]++;
    }
    for(int i=0;i<16;i++){
        if(mbtiCnt[i]>=3){
            cout<<'0'<<endl;
            return 0;
        }
    }
    vector<string> student;
    for(int i=0;i<16;i++){
        while(mbtiCnt[i]!=0){
            mbtiCnt[i]--;
            student.push_back(mbti[i]);
        }
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                string a=student[i],b=student[j],c=student[k];
                int cnt=0;
                for(int l=0;l<4;l++){
                    if(a[l]!=b[l]) cnt++;
                    if(b[l]!=c[l]) cnt++;
                    if(a[l]!=c[l]) cnt++;
                }
                least=min(cnt,least);
            }
        }
    }
    cout<<least<<endl;
    return 0;
}

int main(){
    FAST_IO
    int t;
    cin>>t;
    for(int i=0;i<t;i++) solve();
    return 0;
}