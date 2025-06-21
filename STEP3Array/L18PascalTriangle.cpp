#include <bits/stdc++.h>
using namespace std;
//for getting a particular element having row and col no;
//r-1. c. c-1
int fact(int n){
    int f=1;
    for(int i=1;i<=n;i++) f*=i;
    return f;
}//r=5 c=3;
int parsaltriparticularbrute(){
    //r=5 c=3;
    int num=fact(4);
    int d=fact(2)*fact(2);
    return num/d;
}
int NcR(int n,int r){
    // parsaltriparticularoptimal
    // row=5 col=3;
    int res=1;
    for(int i=0;i<r;i++){
        res*=(n-i);
        res=res/(i+1);
    }
    return res;
}

//FOR PRINTING nth ROW
void nthrow(int n){
    for(int i=0;i<=n;i++){
        cout<<NcR(n,i)<<" ";
    }
}
//for printing entire triangele
void wholebrute(){
    for(int i=1;i<6;i++){
        for(int j=1;j<=i;j++){
            cout<<NcR(i-1,j-1);
        }
        cout<<endl;
    }
}

vector<int> rowboptimal(int row){
    int ans=1;
    vector<int>ansRow;
    for(int i=1;i<row;i++){
        ans=ans*(row-i);
        ans=ans/(i);
    }
    return ansRow;
}
void wholeoptimal(int N){
    for(int i=0;i<=N;i++){
        // rowboptimal()
    }
}
int main(){
    wholebrute();
}