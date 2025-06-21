// count subarray with sum k
#include <bits/stdc++.h>
using namespace std;
int countsubarraywithsumk(){
    int arr[]={1,2,3,-3,1,1,1,4,2,-3};
    int k=3;
    int count=0;
    int s=sizeof(arr)/4;
    for(int i=0;i<s;i++){
        for(int j=i;j<s;j++){
            int sum=0;
            for(int k=i;k<=j;k++){
                sum+=arr[k];
            }
            if(sum==k) count+=1;
        }
    }
    return count;
}
int countsubarraywithsumkbetter(){
    int arr[]={1,2,3,-3,1,1,1,4,2,-3};
    int k=3;
    int count=0;
    int s=sizeof(arr)/4;
    for(int i=0;i<s;i++){
        int sum=0;
        for(int j=i;j<s;j++){
            sum+=arr[j];
            if(sum==k) count+=1;
        }
    }
    return count;
}
int countsubarraywithsumkoptmial(){
    int arr[]={1,2,3,-3,1,1,1,4,2,-3};
    int k=3;
    int s=sizeof(arr)/4;
    unordered_map<int,int> mpp;
    mpp[0]=1;
    int preSum=0,count=0;
    for(int i=0;i<s;i++){
        preSum+=arr[i];
        count+=mpp[preSum-k];
        mpp[preSum]+=1;
    }
    return count;
}

int main(){
    cout<<countsubarraywithsumk();
    return 0;
}