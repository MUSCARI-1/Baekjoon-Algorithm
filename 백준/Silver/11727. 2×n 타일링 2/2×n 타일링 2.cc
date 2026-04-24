#include<iostream>

#include<vector>

#include<algorithm>

#include<utility>

#include<queue>

#include<stack>

#include<deque>

#include<cmath>

using namespace std;

int n;

vector<int> num;

int make()

{

    return 0;

}

int solve()

{

    

    return 0;

}

int main()

{

    cin>>n;

    num.resize(n);

    num[0]=1;

    num[1]=3;

    for(int i=2;i<n;i++)

    {

        if(i%2!=0) num[i]=2*num[i-1]+1;

        else num[i]=2*num[i-1]-1;

        if (num[i]>=10007) num[i]=num[i]%10007;

    }

    cout<<num[n-1]%10007;

    return 0;

}