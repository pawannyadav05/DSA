#include <bits/stdc++.h>
using namespace std;
int upperboundbrute(vector<int>vec,int Tlb){
    sort(vec.begin(),vec.end());
    for(int i=0;i<vec.size();i++){
        if(vec[i]>Tlb) return i;
    }
    return -1;
}
int upperboundbetter(vector<int>vec,int Tlb){
    sort(vec.begin(),vec.end());
    int low=0,high=vec.size()-1;
    int ans=vec.size();
    while(low<=high){
        int mid=(high+low)/2;
        if(vec[mid]>=Tlb){
            ans=mid;
            high=mid-1;
        }else{
            low=mid+1;
        }
    }
    return ans;
}
int upperboundoptimal(vector<int>vec,int Tlb){
    int x=upper_bound(vec.begin(),vec.end(),Tlb)-vec.begin();
    return x;
}
int searcghInsertPostion(vector<int>Temp,int m){
    int n=Temp.size();
    int ans=n;
    sort(Temp.begin(),Temp.end());
    int low=0,high=n-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(Temp[mid]>=m){
            ans=mid;
            high=mid-1;
        }
        low=mid+1;
    }
    return ans;
}
int searchCeli(vector<int>Temp,int m){
    int n=Temp.size();
    int ans=n;
    sort(Temp.begin(),Temp.end());
    int low=0,high=n-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(Temp[mid]>=m){
            ans=mid;
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return Temp[ans];
}
int searchFloor(vector<int>Temp,int m){
    int n=Temp.size();
    int low=0,high=n-1;
    int ans=-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(Temp[mid]<=m){
            ans=Temp[mid];
            low=mid+1;
        }else{
            high=mid-1;
        }
    }
    return ans;
}
int main(){
    vector<int>ar ={3,4,6,7,9,12,16,17};
    int ans=searchFloor(ar,11);
    cout<<ans;
}
