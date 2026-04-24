#include<iostream>
#include<vector>
using namespace std;
int n;
vector<int> num;
int main(){
    cin>>n;
    cout<<"int a;"<<endl;
    for(int i=1;i<=n;i++){
        int z=i-1;
        if(i==1){
            cout<<"int *ptr = &a;"<<endl;
        }
        else if(i==2){
            cout<<"int **ptr2 = &ptr;"<<endl;
        }
        else{
            cout<<"int ";
            for(int j=0;j<i;j++) cout<<'*';
            cout<<"ptr"<<i<<" = &ptr"<<z<<';'<<endl;
        }
    }
    return 0;
}