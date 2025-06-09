#include <bits/stdc++.h>
using namespace std;
//Missing Numbers
void missingnumberbrute(){
    int a[]={1,2,4,5};
    for(int i=1;i<=5;i++){
        int flag=0;
        for(int j=0;j<5;j++){
            if(a[j]==i){
                flag=1;
                break;
            }
        }
        if(flag==0){
            cout<<i;
        }
    }
}
int missingnumberbetter(){
    int a[]={1,2,4,5};
    unordered_map<int,int> hashm;
    hashm[6]={0};
    for(int i=0;i<4;i++){
        hashm[a[i]]++;
    }
    for(int i=1;i<hashm.size();i++){
        if(hashm[i]==0){
            return i;
        }
    }
}
int missingnumberoptimal(){
    int n=5;
    int Rsum=n*(n+1)/2;
    int Asum=0;
    int a[]={1,2,4,5};
    for(int i=0;i<sizeof(a)/4;i++) Asum+=a[i];
    return Rsum-Asum;
}
int maxConsicutiveOne(){
    int a[]={1,1,0,1,1,1,0,1,1};
    int maxl=0;
    int count=0;
    for(int i=0;i<sizeof(a)/4;i++){
        if(a[i]==1){
            count++;
            maxl=max(count,maxl);
        }
        else{
            count=0;
        }
    }
    return maxl;
}
int main(){
    cout<<maxConsicutiveOne();
}