#include <bits/stdc++.h>
using namespace std;

int findsingleelement(vector<int>a){
    int s=a.size();
    if(s==1) return a[s-1];
    if(a[0]!=a[1]) return a[0];
    if(a[s-1]!=a[s-2]) return a[s-1];
    int low=1,high=s-2;
    while(low<=high){
        int mid=(low+high)/2;
        if(a[mid]!=a[mid+1]&& a[mid]!=a[mid-1]) return a[mid];
        if((mid%2==1 && a[mid]==a[mid-1]) || (mid%2==0 && a[mid+1]==a[mid])){
            low=mid+1;
        }else{
            high=mid-1;
        }
    }
    return -1;
}

int main(){
    vector<int>test={1,1,2,2,3,3,4,5,5,6,6};
    int ans=findsingleelement(test);
    cout<<ans;
}