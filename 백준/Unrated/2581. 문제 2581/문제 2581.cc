#include<iostream>

#include<vector>

#include<algorithm>

#include<utility>

#include<queue>

#include<stack>

#include<deque>

#include<set>

#include<map>

#include<cmath>

#include<string>

#include<iomanip>

using namespace std;

int m,n;

vector<int> num;

int make(){

    

    return 0;

}

int solve(){

    

    return 0;

}

int main(){

    cin>>m>>n;

    for(;m<=n;m++){

        if(m<=2){

            if(m==1) continue;

            else{

                num.push_back(m);

                continue;

            }

        }

        bool check=0;

        for(int i=2;i<m;i++){

            if(m%i==0){

                check=1;

                break;

            }

        }

        if(check==1) continue;

        else num.push_back(m);

    }

    if(num.size()==0) cout<<"-1";

    else{

        int result=0;

        for(int i=0;i<num.size();i++){

            result+=num[i];

        }

        cout<<result<<endl<<num[0];

    }

    return 0;

}