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

string str;

int sec=0;

int make(){

    

    return 0;

}

int solve(char a){

    for(int i=0;i<3;i++){

        string compare="ABC";

        if(compare[i]==a){

            sec+=1;

            return 0;

        }

    }

    for(int i=0;i<3;i++){

        string compare="DEF";

        if(compare[i]==a){

            sec+=2;

            return 0;

        }

    }

    for(int i=0;i<3;i++){

        string compare="GHI";

        if(compare[i]==a){

            sec+=3;

            return 0;

        }

    }

    for(int i=0;i<3;i++){

        string compare="JKL";

        if(compare[i]==a){

            sec+=4;

            return 0;

        }

    }

    for(int i=0;i<3;i++){

        string compare="MNO";

        if(compare[i]==a){

            sec+=5;

            return 0;

        }

    }

    for(int i=0;i<4;i++){

        string compare="PQRS";

        if(compare[i]==a){

            sec+=6;

            return 0;

        }

    }

    for(int i=0;i<3;i++){

        string compare="TUV";

        if(compare[i]==a){

            sec+=7;

            return 0;

        }

    }

    for(int i=0;i<4;i++){

        string compare="WXYZ";

        if(compare[i]==a){

            sec+=8;

            return 0;

        }

    }

    return 0;

}

int main(){

    cin>>str;

    for(int i=0;i<str.size();i++){

        sec+=2;

        solve(str[i]);

    }

    cout<<sec;

    return 0;

}