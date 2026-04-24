#include<iostream>

#include<vector>

#include<algorithm>

#include<utility>

#include<queue>

using namespace std;

int num, end_num;

vector<int> card;

vector<int> check;

int card_make()

{

    cin >> num;

    card.resize(num);

    for(int i=0;i<num;i++)

    {

        cin >> card[i];

    }

    sort(card.begin(), card.end());

    cin >> end_num;

    check.resize(end_num);

    for(int i=0;i<end_num;i++)

    {

        cin >> check[i];

    }

    return 0;

}

int solve()

{

    int cnt=0;

    for(int i=0;i<end_num;i++)

    {

        cout << upper_bound(card.begin(), card.end(), check[i])-lower_bound(card.begin(), card.end(), check[i]) << " ";

    }

    return 0;

}

int main()

{

    card_make();

    solve();

    return 0;

}