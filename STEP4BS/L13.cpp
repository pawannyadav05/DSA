#include <bits/stdc++.h>
using namespace std;
int isitpossible(vector<int>a,int day,int k){
    int flowers=0,cnt=0;
    for(int nums:a){
        if(nums<=day){
            cnt++;
            if(cnt==k){
                flowers++;
                cnt=0;
            }
        }else{
            cnt=0;
        }
    }
    return flowers;
}
int bloomdaybrutte(vector<int>a,int m,int k){
    int minn=*min_element(a.begin(),a.end());
    int maxx=*max_element(a.begin(),a.end());
    for(int i=minn;i<=maxx;i++){
        int b=isitpossible(a,i,k);
        if(b>=m) return i;
    }
    return -1;
}
int bloomdayoptimal(vector<int>a,int m,int k){
    int minn=*min_element(a.begin(),a.end());
    int maxx=*max_element(a.begin(),a.end());
    int ans=minn;
    while(minn<=maxx){
        int mid=(minn+maxx)/2;
        int bq=isitpossible(a,mid,k);
        if(bq>=m){
            ans=mid;
            maxx=mid-1;
        }else{
            minn=mid+1;
        }
    }
    return ans;
}

int main(){
    return 0;
}