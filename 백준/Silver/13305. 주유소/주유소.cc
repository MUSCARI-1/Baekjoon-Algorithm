#include<bits/stdc++.h>

using namespace std;

#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main(){

    FAST_IO;

    int n;

    long long result=0;

    cin>>n;

    vector<int> line(n-1);

    vector<int> price(n);

    for(int i=0;i<n-1;i++) cin>>line[i];

    for(int i=0;i<n;i++) cin>>price[i];

    int point=0;

    long long st=line[0];

    int low=price[0];

    while(0==0){

        point++;

        if(point==n-1){

            if(st!=0) result+=st*low;

            break;

        }

        if(low>price[point]){

            result+=st*low;

            low=price[point];

            st=line[point];

        }

        else{

            st+=line[point];

        }

    }

    cout<<result;

    return 0;

}