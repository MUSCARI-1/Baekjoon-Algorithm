#include<iostream>

#include<vector>

#include<algorithm>

#include<utility>

#include<queue>

#include<stack>

#include<deque>

#include<cmath>

using namespace std;

int t;

vector<int> num;

vector<int> fibo(41);

int input()

{

    cin >> t;

    num.resize(t);

    for(int i=0;i<t;i++) cin>>num[i];

    return 0;

}

int fibo_solve(int n)

{

    fibo[n]=1;

    for(;n>1;n--)

    {

        fibo[n-1]=fibo[n-1]+fibo[n];

        fibo[n-2]=fibo[n-2]+fibo[n];

    }

    return 0;

}

int main()

{

    input();

    for(int i=0;i<t;i++)

    {

        fibo_solve(num[i]);

        cout << fibo[0] << " " << fibo[1] << endl;

        for(int i=0;i<fibo.size();i++) fibo[i]=0;        

    }

    return 0;

}