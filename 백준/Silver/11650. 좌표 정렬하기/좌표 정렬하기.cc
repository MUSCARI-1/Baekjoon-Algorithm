#include<iostream>

#include<vector>

#include<algorithm>

#include<utility>

using namespace std;

int n;

vector<pair<int, int>> vec;

int solve()

{

    cin >> n;

    vec.resize(n);

    for (int i=0;i<n;i++)

    {

        cin >> vec[i].first >> vec[i].second;

    }

    sort(vec.begin(), vec.end());

    for (int i=0;i<n;i++)

    {

        cout << vec[i].first << " " << vec[i].second << "\n";

    }

    return 0;

}

int main()

{

    solve();

    return 0;

}