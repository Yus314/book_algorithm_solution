#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<long long>T(50);
    T[0]=0;
    T[1]=0;
    T[2]=1;
    for(int N=3;N<50;++N){
        T[N]=T[N-1]+T[N-2]+T[N-3];

    
    }
    int in;
    cin>>in;
    cout<<T[in];
}