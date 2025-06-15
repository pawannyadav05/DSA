#include <bits/stdc++.h>
using namespace std;

int maxiumumsubarraysumbrute(){
    int a[]={-2,-3,4,-1,-2,1,5,-3};
    int maxi=INT_MIN;
    int n=sizeof(a)/4;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int sum=0;
            for(int k=i;k<j;k++){
                sum+=a[k];
            }maxi=max(sum,maxi);
        }
    }
    return maxi;
}
int maxiumsubarraysumbetter(){
    int a[]={-2,-3,4,-1,-2,1,5,-3};
    int maxi=INT_MIN;
    int n=sizeof(a)/4;
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=i;j<n;j++){
            sum+=a[j];
            maxi=max(sum,maxi);
        }
    }
    return maxi;
}
int maxiumsubarrayoptimal(){
    int a[]={-2,-3,4,-1,-2,1,5,-3};
    int n=sizeof(a)/4;
    int maxi=INT_MIN;
    int sum=0;
    // int start,ansStart=-1,ansEnd=-1;
    for(int i=0;i<n;i++){
        // if(sum==0) start=i;
        sum+=a[i];
        if(sum>maxi){
            maxi=sum;
            // ansStart=start,ansEnd=i;
        }
        if(sum<0) sum=0;
    }
    return maxi;

}
int main(){
    cout<<maxiumsubarrayoptimal();
}