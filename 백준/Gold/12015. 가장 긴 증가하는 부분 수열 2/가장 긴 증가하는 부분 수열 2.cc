#include<bits/stdc++.h>

using namespace std;

#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int INF=123456789;

int main(){

    FAST_IO;

    int n;

    cin>>n;

    vector<int> lis;

    lis.push_back(0);

    for(int i=0;i<n;i++){

        int k;

        cin>>k;

        if(k>lis[lis.size()-1]){

            lis.push_back(k);

        }

        else{

            int left=0,right=lis.size()-1;

            while(right-1!=left){

                int mid=(left+right)/2;

                if(k<=lis[mid]) right=mid;

                else left=mid;

            }

            lis[right]=k;

        }

    }

    cout<<lis.size()-1;

    return 0;

}