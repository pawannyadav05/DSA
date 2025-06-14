#include <bits/stdc++.h>
using namespace std;
string twosumbrute(){
    int a[]={2,7,11,15};
    int target=9;
    for(int i=0;i<4;i++){
        for(int j=i+1;j<4;j++){
            if(a[i]+a[j]==target) return "Yes";
        }
    }
    return "No";
}
string twosumbetter(){
    int a[]={2,7,11,15};
    int target=11;
    unordered_map<int,int>mapp;
    for(int i=0;i<4;i++){
        int x=a[i];
        int more=target-a[i];
        if(mapp.find(more)!=mapp.end()) return "Yes";
        mapp[x]=i;
    }
    return "No";
}
string twosumoptimal(){
    int a[]={2,7,11,15};
    int target=12;
    int left=0,right=sizeof(a)/4;
    while(left<right){
        int sum=a[left]+a[right-1];
        if(sum==target) return "Yes";
        if(sum<target) left++;
        else right--;
    }
    return "No";
}
int main(){
    cout<<twosumoptimal();
}