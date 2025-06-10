#include <bits/stdc++.h>
using namespace std;
// Longest subarray with sum K
int longestsubaaraywithsumknnrute(){
    int rqaum=3;
    int a[]={1,2,3,1,1,1,1,4,2,3};
    int n=10;
    int len=0;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int sum=0;
            for(int k=i;k<=j;k++){
                sum+=a[k];
            }
            if(sum==rqaum) {
                len=max(len,j-i+1);
            }
            
        }
    }
    return len;
    //taking 0(n^3)
}
int longestsubaaraywithsumkbrutebetter(){
    int rqaum=3;
    int a[]={1,2,3,1,1,1,1,4,2,3};
    int n=10;
    int len=0;
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=i;j<n;j++){
            sum+=a[j];
            if(sum==rqaum) {
                len=max(len,j-i+1);
            }
            
        }
    }
    return len;
    //taking 0(n2)
}
int longestsubaarraywithsumkbetter(vector<int>a,long long k){
    map<long long,int>presumMap;
    long long sum=0;
    int maxLen=0;
    for(int i=0;i<a.size();i++){
        sum+=a[i];
        if(sum==k){
            maxLen=max(maxLen,i+1);
        }
        int rem=sum-k;
        if(presumMap.find(rem)!=presumMap.end()){
            int len=i-presumMap[rem];
            maxLen=max(maxLen,len);
        }
        if(presumMap.find(rem)!=presumMap.end()){
            presumMap[sum]=i;
        }
    }
    return maxLen;
}
int longestsubaarraywithsumkbest(vector<int>a,long long k){
    int left=0,right=0;
    long long sum=a[0];
    int maxLen=0;
    int n=a.size();
    while(right<n){
        while(left<=right&& sum>k){
            sum-=a[left];
            left++;
        }
        if(sum==k){
            maxLen=max(maxLen,right-left+1);
        }
        right++;
        if(right<n)sum+=a[right];
    }
    return maxLen;
}

int main(){
    cout<<longestsubaaraywithsumkbrutebetter();
}
