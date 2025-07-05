#include <bits/stdc++.h>
using namespace std;

int binarysearch(){
    vector<int>ar ={3,4,6,7,9,12,16,17};
    int target=6;
    int low=0;
    int high=ar.size()-1;
    while(low<=high){
        int mid=(low + high)/2;
        if(ar[mid]==target) return mid;
        else if(ar[mid]>target) high=mid-1;
        else low=mid+1;
    }
    return -1;
}
int binarysearchfunction(vector<int>ar,int low,int high,int target){
    if(low>high) return -1;
    int mid=(low+high)/2;
    if(ar[mid]==target) return mid;
    else if(target>ar[mid]) return binarysearchfunction(ar,mid+1,high,target);
    else return binarysearchfunction(ar,low,mid-1,target);
}
int main(){
    vector<int>ar ={3,4,6,7,9,12,16,17};
    int target=6;
    int res=binarysearchfunction(ar,0,ar.size(),target);
    cout<<res;

}