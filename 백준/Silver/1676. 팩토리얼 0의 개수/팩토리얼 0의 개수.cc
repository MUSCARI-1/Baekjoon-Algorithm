#include<iostream>
#include<vector>
#include<algorithm>
#include<utility>
#include<queue>
#include<stack>
#include<deque>
using namespace std;

int n;
int two=0;
int five=0;

int card_make()
{
    
    return 0;
}

int solve()
{
    for(int i=1;i<n+1;i++)
    {
        int a=i;
        while(a%2==0 || a%5==0)
        {
            while(a%2==0)
            {
                a=a/2;
                two++;
            }
            while(a%5==0)
            {
                a=a/5;
                five++;
            }
        }
    }
    if(two>five) cout << five;
    else cout << two;
    return 0;
}

int main()
{
    cin >> n;
    solve();
    return 0;
}