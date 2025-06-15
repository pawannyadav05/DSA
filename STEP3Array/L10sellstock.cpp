#include <bits/stdc++.h>
using namespace std;
int profitstock(){
    int a[]={7,1,5,3,6,4};
    int maxProfit=0;
    int mini=a[0];
    int s=sizeof(a)/4;
    for(int i=0;i<s;i++){
        int profit=a[i]-mini;
        maxProfit=max(maxProfit,profit);
        mini=min(mini,a[i]);
    }
    return maxProfit;
}
int main(){
    cout<<profitstock();
}