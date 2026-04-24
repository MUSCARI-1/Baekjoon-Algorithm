#include<iostream>

#include<vector>

#include<algorithm>

#include<utility>

#include<queue>

#include<stack>

#include<deque>

#include<cmath>

using namespace std;

int t, n;

int cnt=0;

int input()

{

    cin >> t;

    return 0;

}

int solve(int a)

{

    if(a<=3)

    {

        if(a==1) return 1;

        else if(a==2) return 2;

        else return 4;

    }

    return solve(a-1)+solve(a-2)+solve(a-3);

}

int main()

{

    input();

    for(int i=0;i<t;i++)

    {

        cin >> n;

        cout << solve(n) << endl;

    }

    return 0;

}