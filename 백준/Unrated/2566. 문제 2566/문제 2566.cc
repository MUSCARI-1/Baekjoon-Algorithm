#include<bits/stdc++.h>

using namespace std;

#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main(){

    FAST_IO;

    int x,y;

    int result=0;

    vector<vector<int>> v(9);

    for(int i=0;i<9;i++){

        v[i].resize(9,0);

        for(int j=0;j<9;j++){

            cin>>v[i][j];

            if(result<v[i][j]){

                result=v[i][j];

                x=i;

                y=j;

            }

        }

    }

    cout<<result<<endl;

    cout<<x+1<<" "<<y+1;

    return 0;

}