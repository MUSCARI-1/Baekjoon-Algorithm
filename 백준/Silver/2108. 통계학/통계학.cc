#include<bits/stdc++.h>

using namespace std;

#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int aver(vector<int> num){

    int average=0;

    for(int i=0;i<num.size();i++) average+=num[i];

    float s=num.size();

    bool check=0;

    if(average==-1&&s>2) return 0;

    else if(average<0){

        average=average-average*2;

        check=1;

    }

    if(average%num.size()>=s/2){

        average=average/num.size()+1;

    }

    else average=average/num.size();

    if(check==1) return average-average*2;

    else return average;

}

int center(vector<int> num){

    int i=num.size()/2;

    return num[i];

}

int many(vector<int> num){

    int result=num[0];

    int now=num[0];

    int now_cnt=1;

    int cnt=1;

    bool check=0;

    for(int i=1;i<num.size();i++){

        if(num[i]==now){

            now_cnt++;

        }

        else{

            if(now_cnt>cnt){

                result=now;

                cnt=now_cnt;

                check=0;

            }

            else if(now_cnt==cnt){

                if(check==0){

                    check=1;

                    if(i==1) result=num[1];

                    else result=now;

                }

            }

            now=num[i];

            now_cnt=1;

        }

    }

    if(now_cnt>cnt){

        result=now;

        cnt=now_cnt;

    }

    else if(now_cnt==cnt){

        if(check==0) result=now;

    }

    return result;

}

int range(vector<int> num){

    int high=num[num.size()-1];

    int low=num[0];

    return high-low;

}

int main(){

    FAST_IO;

    int n;

    cin>>n;

    vector<int> num(n);

    for(int i=0;i<n;i++) cin>>num[i];

    stable_sort(num.begin(),num.end());

    cout<<aver(num)<<endl<<center(num)<<endl<<many(num)<<

    endl<<range(num);

    return 0;

}