#include<bits/stdc++.h>

using namespace std;

#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main(){

    FAST_IO;

    string str;

    cin>>str;

    int point=0;

    int result=0;

    string box;

    int pivot=0;

    bool sign=0;

    while(point!=str.size()){

        char one=str[point];

        if(one-'0'<0){

            int i=stoi(box);

            if(one=='+'){

                if(sign==0){

                    result+=i;

                }

                else{

                    pivot+=i;

                }

            }

            else{

                if(sign==1){

                    result-=pivot;

                    pivot=i;

                }

                else{

                    sign=1;

                    result+=i;

                }

            }

            box="\0";

        }

        else{

            box.push_back(one);

        }

        point++;

    }

    int i=stoi(box);

    if(sign==0) result+=i;

    else pivot+=i;

    if(sign==1&&pivot!=0) result-=pivot;

    cout<<result;

    return 0;

}