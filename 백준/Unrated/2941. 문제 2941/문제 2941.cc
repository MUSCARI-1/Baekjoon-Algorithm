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

int cnt=0;

int make(){

    

    return 0;

}

int solve(){

    

    return 0;

}

int main(){

    cin>>str;

    for(int i=0;i<str.size();){

        if(str[i]=='c'){

            if(str[i+1]=='-'||str[i+1]=='='){

                cnt++;

                i+=2;

                continue;

            }

        }

        else if(str[i]=='s'||str[i]=='z'){

            if(str[i+1]=='='){

                cnt++;

                i+=2;

                continue;

            }

        }

        else if(str[i]=='l'||str[i]=='n'){

            if(str[i+1]=='j'){

                cnt++;

                i+=2;

                continue;

            }

        }

        else if(str[i]=='d'){

            if(str[i+1]=='-'){

                cnt++;

                i+=2;

                continue;

            }

            else if(str[i+1]=='z'&&str[i+2]=='='){

                cnt++;

                i+=3;

                continue;

            }

        }

        cnt++;

        i++;

        continue;

    }

    cout<<cnt;

    return 0;

}