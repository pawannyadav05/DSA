#include <bits/stdc++.h>
using namespace std;
vector<int>firstLastOccurnceBrute(vector<int>Temp,int n){
    int s=Temp.size();
    int f=-1,l=-1;
    int exist=0;
    for(int i=0;i<s;i++){
        if(Temp[i]==n){
            exist=1;
            if(f<0) f=i;
            l=i;
        }
    }
    if(exist) return {f,l};
    return {-1,-1};
}
int firsthalf(vector<int>Temp,int n){
    int s=Temp.size();
    int low=0,high=s-1;
    int ans=-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(Temp[mid]==n){
            ans=mid;
            high=mid-1;
        }
        else if(Temp[mid]<n){
            low=mid+1;
        }
        else{
            low=mid-1;
        }
    }
    return ans;
}
int lasthalf(vector<int>Temp,int n){
    int s=Temp.size();
    int low=0,high=s-1;
    int ans=-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(Temp[mid]==n){
            ans=mid;
            low=mid+1;
        }
        else if(Temp[mid]<n){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return ans;
}
vector<int> firstLastOccurnce(vector<int>Temp,int n){
    return {firsthalf(Temp,n),lasthalf(Temp,n)};
}
int main(){

}