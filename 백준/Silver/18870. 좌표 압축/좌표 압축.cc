#include<bits/stdc++.h>

using namespace std;

#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int make(){

    

    return 0;

}

int solve(){

    

    return 0;

}

int main(){

    FAST_IO;

    int n;

    cin>>n;

    vector<pair<int,int>> num;

    for(int i=0;i<n;i++){

        int x;

        cin>>x;

        num.push_back({x,i});

    }

    stable_sort(num.begin(),num.end());

    //for(int i=0;i<n;i++) cout<<num[i].first<<" "<<num[i].second<<endl;

    vector<int> comp_num(num.size());

    int i=0;

    int j=-1;

    int fr=-1234567890;

    while(i<num.size()){

        if(fr==num[i].first){

            comp_num[num[i].second]=j;

        }

        else{

            j++;

            comp_num[num[i].second]=j;

            fr=num[i].first;

        }

        i++;

    }

    for(int l=0;l<comp_num.size();l++){

        cout<<comp_num[l]<<" ";

    }

    return 0;

}