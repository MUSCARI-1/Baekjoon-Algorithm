#include<iostream>

#include<vector>

#include<algorithm>

#include<utility>

#include<queue>

#include<stack>

#include<deque>

#include<cmath>

using namespace std;

int n, r, c;

int cnt;

int total = 0;

int z_make()

{

    cin >> n >> r >> c;

    return 0;

}

void solve(int a, int b)

{

    cnt=0;

    int na=a;

    int nb=b;

    if(pow(2,n-1)<=a && pow(2,n-1)<=b)

    {

        na=a-pow(2,n-1);

        nb=b-pow(2,n-1);

        cnt=pow(4,n-1);

        cnt=cnt*3;

    }

    else if(pow(2,n-1)<=a)

    {

        na=a-pow(2,n-1);

        cnt=pow(4,n-1);

        cnt=cnt*2;

    }

    else if(pow(2,n-1)<=b)

    {

        nb=b-pow(2,n-1);

        cnt=pow(4,n-1);

    }

    if(n!=1)

    {

        n--;

        total += cnt;

        solve(na, nb);

    }

    else

    {

        total += cnt;

    }

}

int main()

{

    z_make();

    solve(r, c);

    cout << total;

    return 0;

}