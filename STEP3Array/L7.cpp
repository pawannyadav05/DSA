#include <bits/stdc++.h>
using namespace std;
int majortyelementbrute(){
    int a[]={1,1,22,3,4,1,2,4,1,4,4};
    int maxEle=0;;
    int len=sizeof(a)/4;
    for(int i=0;i<len;i++){
        int x=a[i];
        int count=0;
        for(int j=i;j<len;j++){
            if(a[j]==x) count++;
        }
        maxEle=max(maxEle,count);
    }
    return maxEle;
}
int majortyelementbetter(){
    int a[]={1,1,22,3,4,1,2,4,1,4,4};
    int s=sizeof(a)/a[0];
    unordered_map<int,int>mpp;
    for(int num:a){
        mpp[num]++;
        if(mpp[num]>s/2) return num;
    }
    return -1;
}
int majortyelementOptimal(){
    int cnt=0;
    int el;
    int a[]={1,1,22,3,4,1,2,4,1,4,4};
    int s=sizeof(a)/4;
    for(int i=0;i<s;i++){
        if(cnt==0){
            cnt=1;
            el=a[i];
        }else if(a[i]==el){
            cnt++;
        }else{
            cnt--;
        }

    }
    int cnt1=0;
    for(int i=0;i<s;i++){
        if(a[i]==el) cnt1++;
    }
    if(cnt1>s/2){
        return el;
    }
    return -1;
}

int main(){
    cout<<majortyelementOptimal();
}