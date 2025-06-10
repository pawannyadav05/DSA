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
int missingnumberoptimalbest(){
    int a[]={1,2,4,5};
    int N=5;
    int n=N-1;
    int xor1=0;int xor2=0;
    for(int i=0;i<n;i++){
        xor1=xor1^a[i];
        xor2=xor2^(i+1);
    }
    xor2=xor2^N;
    return xor2^xor1;
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
//l3 26 min to 36 min
int main(){
    cout<<missingnumberoptimalbest();
}