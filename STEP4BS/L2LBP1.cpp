#include <bits/stdc++.h>
using namespace std;
int lowerboundbrute(vector<int>vec,int Tlb){
    sort(vec.begin(),vec.end());
    for(int i=0;i<vec.size();i++){
        if(vec[i]>=Tlb) return i;
    }
    return -1;
}
int lowerboundbetter(vector<int>vec,int Tlb){
    sort(vec.begin(),vec.end());
    int low=0,high=vec.size()-1;
    int ans=vec.size();
    while(low<=high){
        int mid=(high+low)/2;
        if(vec[mid]==Tlb){
            ans=mid;
            high=mid-1;
        }else{
            low=mid+1;
        }
    }
    return ans;
}
int lowerboundoptimal(vector<int>vec,int Tlb){
    int x=lower_bound(vec.begin(),vec.end(),Tlb)-vec.begin();
    return x;
}
int main(){
    vector<int>ar ={3,4,6,7,9,12,16,17};
    int ans=lowerboundoptimal(ar,8);
    cout<<ans;
}
