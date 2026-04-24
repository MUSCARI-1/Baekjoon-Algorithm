#include<bits/stdc++.h>
using namespace std;
#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main(){
    FAST_IO
    vector<int> v(9);
    for(int i=0;i<9;i++) cin>>v[i];
    sort(v.begin(),v.end());
    for(int a1=0;a1<3;a1++){
        for(int a2=a1+1;a2<4;a2++){
            for(int a3=a2+1;a3<5;a3++){
                for(int a4=a3+1;a4<6;a4++){
                    for(int a5=a4+1;a5<7;a5++){
                        for(int a6=a5+1;a6<8;a6++){
                            for(int a7=a6+1;a7<9;a7++){
                                if(v[a1]+v[a2]+v[a3]+v[a4]+v[a5]+v[a6]+v[a7]==100){
                                    cout<<v[a1]<<endl<<v[a2]<<endl<<v[a3]<<endl<<v[a4]<<endl<<v[a5]<<endl<<v[a6]<<endl<<v[a7];
                                    return 0;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return 0;
}