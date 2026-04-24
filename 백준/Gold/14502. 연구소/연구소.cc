#include<iostream>

#include<vector>

#include<algorithm>

#include<utility>

#include<queue>

#include<stack>

#include<deque>

#include<set>

#include<map>

#include<cmath>

#include<string>

using namespace std;

int n,m;

vector<vector<int>> lab;

vector<vector<int>> copy_lab;

vector<pair<int,int>> blank;

vector<int> virusn;

vector<int> virusm;

queue<pair<int,int>> virus;

vector<pair<int,int>> real;

int result=0;

int spread();

int bfs(int q,int w);

int make(){

    lab.resize(n);

    copy_lab.resize(n);

    for(int i=0;i<n;i++){

        lab[i].resize(m);

        copy_lab[i].resize(m);

        for(int j=0;j<m;j++){

            cin>>lab[i][j];

            copy_lab[i][j]=lab[i][j];

            if(lab[i][j]==2){

                virusn.push_back(i);

                virusm.push_back(j);

            }

            else if(lab[i][j]==0){

                blank.push_back({i,j});

            }

        }

    }

    for(int i=0;i<blank.size();i++) //cout<<blank[i].first<<" "<<blank[i].second<<endl;

    return 0;

}

int search(){

    for(int i=0;i<blank.size()-2;i++){

        for(int j=i+1;j<blank.size()-1;j++){

            for(int k=j+1;k<blank.size();k++){

                real.push_back({blank[i].first,blank[i].second});

                real.push_back({blank[j].first,blank[j].second});

                real.push_back({blank[k].first,blank[k].second});

                /*cout<<real[0].first<<" "<<real[0].second

                <<"    "<<real[1].first<<" "<<real[1].second

                <<"    "<<real[2].first<<" "<<real[2].second

                <<endl;*/

                spread();

                for(int z=0;z<3;z++) real.pop_back();

            }

        }

    }

    return 0;

}

int spread(){

    for(int i=0;i<3;i++){

        copy_lab[real[i].first][real[i].second]=1;

    }

    for(int i=0;i<virusn.size();i++){

        virus.push({virusn[i],virusm[i]});

    }

    while(virus.size()!=0){

        bfs(virus.front().first,virus.front().second);

        virus.pop();

    }

    int check=0;

    for(int i=0;i<n;i++){

        for(int j=0;j<m;j++){

            if(copy_lab[i][j]==0) check++;

        }

    }

    if(check>result) result=check;

    for(int i=0;i<n;i++){

        for(int j=0;j<m;j++){

            copy_lab[i][j]=lab[i][j];

        }

    }

    return 0;

}

int bfs(int q,int w){

    int ax[4]={1,0,-1,0};

    int ay[4]={0,-1,0,1};

    for(int i=0;i<4;i++){

        int nx=ax[i]+q;

        int ny=ay[i]+w;

        if(nx<n && ny<m && nx>=0 && ny>=0 &&

        copy_lab[nx][ny]==0){

            copy_lab[nx][ny]=2;

            virus.push({nx,ny});

        }

    }

    return 0;

}

int main(){

    cin>>n>>m;

    make();

    search();

    cout<<result;

    return 0;

}