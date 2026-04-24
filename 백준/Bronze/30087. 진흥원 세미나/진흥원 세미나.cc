#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
int INF = 987654321;

int main() {
    FAST_IO;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        if(s == "Algorithm") cout << "204" << endl;
        else if(s == "DataAnalysis") cout << "207" << endl;
        else if(s == "ArtificialIntelligence") cout << "302" << endl;
        else if(s == "CyberSecurity") cout << "B101" << endl;
        else if(s == "Network") cout << "303" << endl;
        else if(s == "Startup") cout << "501" << endl;
        else cout << "105" << endl;
    }
    return 0;
}

