#include<bits/stdc++.h>

using namespace std;

#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int high=-1234567890;

int low=1234567890;

int n;

void dfs(vector<int> nums,int op1,int op2,int op3,int op4,int now,int s){

    if(s==n){

        high=max(now,high);

        low=min(now,low);

        return;

    }

    if(op1!=0) dfs(nums,op1-1,op2,op3,op4,now+nums[s],s+1);

    if(op2!=0) dfs(nums,op1,op2-1,op3,op4,now-nums[s],s+1);

    if(op3!=0) dfs(nums,op1,op2,op3-1,op4,now*nums[s],s+1);

    if(op4!=0) dfs(nums,op1,op2,op3,op4-1,now/nums[s],s+1);

}

int main(){

    FAST_IO;

    int plus,minus,multi,divide;

    cin>>n;

    vector<int> nums(n);

    for(int i=0;i<n;i++) cin>>nums[i];

    cin>>plus>>minus>>multi>>divide;

    dfs(nums,plus,minus,multi,divide,nums[0],1);

    cout<<high<<endl<<low;

    return 0;

}