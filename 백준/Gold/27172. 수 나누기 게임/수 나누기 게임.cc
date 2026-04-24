#include<bits/stdc++.h>

using namespace std;

#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main(){

    FAST_IO;

    int n;

    cin>>n;

    vector<int> score(1000001,0);

    vector<bool> check(1000001,0);

    vector<int> v(n);

    priority_queue<int> sortNum;

    for(int i=0;i<n;i++){

        cin>>v[i];

        sortNum.push(-v[i]);

        check[v[i]]=1;

    }

    while(sortNum.size()!=0){

        int k=-sortNum.top();

        sortNum.pop();

        for(int i=1;i<sqrt(k);i++){

            if(k%i==0){

                int kk=k/i;

                if(check[i]){

                    score[k]--;

                    score[i]++;

                }

                if(check[kk]){

                    score[k]--;

                    score[kk]++;

                }

            }

        }

        int sqk=sqrt(k);

        if(sqk*sqk==k&&check[sqk]){

            score[sqk]++;

            score[k]--;

        }

    }

    for(int i=0;i<n;i++) cout<<score[v[i]]<<" ";

    return 0;

}