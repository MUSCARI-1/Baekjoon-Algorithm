#include<iostream>

#include<vector>

#include<algorithm>

#include<utility>

using namespace std;

int n;

vector<pair<int, int>> dot;

int main()

{

     cin >> n;

     dot.resize(n);

     for (int i=0;i<n;i++)

     {

         cin >> dot[i].second >> dot[i].first;

     }

     sort(dot.begin(), dot.end());

     for (int i=0;i<n;i++)

     {

         cout << dot[i].second << " " << dot[i].first << "\n";

     }

     return 0;

}

     