#include<iostream>

#include<vector>

#include<algorithm>

#include<utility>

using namespace std;

int n;

vector<int> ti;

int main()

{

     cin >> n;

     ti.resize(n);

     for (int i=0;i<n;i++)

     {

         cin >> ti[i];

     }

     sort(ti.begin(), ti.end());

     int result=0;

     for (int i=0;i<n;i++)

     {

         result = result + ti[i]*(n-i);

     }

     cout << result;

     return 0;

}

 