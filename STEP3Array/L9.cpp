#include <bits/stdc++.h>
using namespace std;
void rearrangebrute(){
    int a[]={3,1,-2,-5,2,-4};
    int s=6;
    vector<int> pos;
    vector<int> neg;
    for(int i=0;i<6;i++){
        if(a[i]>0){
            pos.push_back(a[i]);
        }
        else{
            neg.push_back(a[i]);
        }
    }
    for(int i=0;i<6/2;i++){
        a[2*i]=pos[i];
        a[2*i +1]=neg[i];
    }
    //scape complexity = O(n) tc=o(2n)
}
void rearrangeBetter(){
    int a[]={3,1,-2,-5,2,-4};
    int ans[6];
    int posIndx=0;
    int negIndex=1;
    for(int i=0;i<6;i++){
        if(a[i]>0){
            ans[posIndx]=a[i];
            posIndx+=2;
        }else{
            ans[negIndex]=a[i];
            negIndex+=2;
        }
    }
    for(int i=0;i<6;i++) cout<<ans[i];
    //scape complexity=o(n) tc=o(n)
}
int main(){
    rearrangeBetter();
}