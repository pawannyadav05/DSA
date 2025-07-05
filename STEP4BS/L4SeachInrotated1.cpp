#include<bits/stdc++.h>
using namespace std;
//problem is to serch a specific number in given array
//which is sorted and rotated
//brute is linear search

int searchinrotated1(vector<int>Temp,int n){
    int s=Temp.size();
    int l=0,h=s-1;
    int ans=-1;
    while(l<=h){
        int mid=(l+h)/2;
        if(Temp[mid]==n) return mid;
        else if(Temp[mid]<=Temp[h]){
            if(Temp[mid]<=n && n<=Temp[h]){
                l=mid+1;
            }else{
                h=mid-1;
            }
        }
        else{
            if(Temp[l]<=n && n<=Temp[mid]){
                h=mid-1;
            }
            else{
                l=mid+1;
            }
        }
    }
    return -1;
}
int searchinrotated2(vector<int>Temp,int n){
    int s=Temp.size();
    int low=0,high=s-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(Temp[mid]==n) return mid;
        if(Temp[low]==Temp[mid] && Temp[mid]==Temp[high]){
            low++;
            high--;
            continue;
        }
        else if(Temp[mid]<=Temp[high]){
            if(Temp[mid]<=n && n<=Temp[high]){
                low=mid+1;
            }else{
                high=mid-1;
            }
        }
        else{
            if(Temp[low]<=n && n<=Temp[mid]){
                high=mid-1;
            }else{
                low=mid+1;
            }
        }
    }
    return -1;
}
int findMiniuminRotatedArray(vector<int>Temp){
    int minn=INT_MAX;
    int low=0,high=(Temp.size()-1);
    while(low<=high){
        int mid=(low+high)/2;
        if(Temp[mid]<=Temp[high]){
            minn=min(minn,Temp[mid]);
            high=mid-1;
        }
        else{
            minn=min(minn,Temp[low]);
            low=mid+1;
        }
    }
    return minn;
}
int main(){
    vector<int>Test={7,8,9,1,2,3,4,5,6};
    int ans=findMiniuminRotatedArray(Test);
    cout<<ans;
}