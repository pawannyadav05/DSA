#include <bits/stdc++.h>
using namespace std;

int requiredtime(vector<int>a,int i){
    int t=0;
    for(int num:a){
        if(num%i==0) t+=(num/i);
        else{
            t+=(num/i)+1;
        }
    }
    return t;
}
int kokoeatingBananabrute(vector<int>a,int h){
    int x= *max_element(a.begin(),a.end());
    for(int i=1;i<=x;i++){
        int reQ=requiredtime(a,i);
        if(reQ<=h) return i;
    }
    return -1;
}
int kokoeatingbananoptimal(vector<int>a,int h){
    int x= *max_element(a.begin(),a.end());
    int l=1,hi=x;
    int reQ;
    while(l<=hi){
        int mid=(l+hi)/2;
        reQ=requiredtime(a,mid);
        if(reQ<=h){
            hi=mid-1;
        }else{
            l=mid+1;
        }
    }
    return l;
}

int main(){
    vector<int> a = {3, 6, 7, 11};
    int h = 8;
    cout<<kokoeatingbananoptimal(a,h);
}