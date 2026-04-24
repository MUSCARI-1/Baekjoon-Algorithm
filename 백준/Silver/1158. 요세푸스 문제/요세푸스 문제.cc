#include <bits/stdc++.h>
using namespace std;
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main(){
    int n,k;
    cin>>n>>k;
    queue<int> q;
    vector<int> arr;
    for(int i=1;i<=n;i++) q.push(i);
    for(int i=0;i<n;i++){
        for(int j=0;j<k;j++){
            int f=q.front();
            q.pop();
            if(j!=k-1) q.push(f);
            else arr.push_back(f);
        }
    }
    cout<<'<';
    for(int i=0;i<n;i++){
        cout<<arr[i];
        if(i==n-1) break;
        cout<<", ";
    }
    cout<<'>';
    return 0;
}