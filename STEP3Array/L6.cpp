#include <bits/stdc++.h>
using namespace std;
void sort012brute(){
    int a[]={0,0,1,2,1,0,2,2,0,1,0,1,1};
    int x=sizeof(a)/4;
    for(int i=0;i<x;i++){
        for(int j=0;j<x;j++){
            if(a[i]<a[j]) swap(a[i],a[j]);
        }
    }
    for(int i=0;i<x;i++){
        cout<<a[i]<<" ";
    }
}
void sort012optimal(){
    int a[]={0,0,1,2,1,0,2,2,0,1,0,1,1};
    int x=sizeof(a)/4;
    int low=0,mid=0,high=x-1;
    while(mid<=high){
        if(a[mid]==0){
            swap(a[low],a[mid]);
            mid++;
            low++;
        }else if(a[mid]==1){
            mid++;
        }else{
            swap(a[mid],a[high]);
            high--;
        }
    }
    for(int i=0;i<x;i++){
        cout<<a[i]<<" ";
    }
}
int main(){
    sort012optimal();
}