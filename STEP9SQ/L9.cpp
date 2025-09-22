#include <iostream>
using namespace std;

int sumOfSubarrayMinimumBrute(vector<int>a){
    int sum=0;
    int mod=(int)(1e9 +7);

    for(int i=0;i<a.size();i++){
        int mini=a[i];
        for(int j=i;j<a.size();j++){
            mini=min(mini,a[j]);
            sum=(sum+mini)%mod;
        }
    }
    return sum;
}
//imp forotpimal solution
vector<int> pSE(vector<int>nums){
    int n=nums.size();
    vector<int>ans(n,-1);
    stack<int>st;
    for(int i=0;i<n;i++){
        while(!st.empty() && nums[st.top()]>nums[i]){
            st.pop();
        }
        if(!st.empty()) ans[i]=st.top();

        st.push(i);
    }
    return ans;
}
vector<int> nSE(vector<int>nums){
    int n=nums.size();
    vector<int>ans(n,n);
    stack<int>st;
    for(int i=n-1;i>=0;i--){
        while(!st.empty() && nums[st.top()]>=nums[i]){
            st.pop();
        }
        if(!st.empty()) ans[i]=st.top();

        st.push(i);
    }
    return ans;
}

int sumOfSubarrayMinimumOptimal(vector<int>nums){
    vector<int>nse=nSE(nums);
    vector<int>pse=pSE(nums);
    long long total=0;
    int mod=(int)(1e9 + 7);

    for(int i=0;i<nums.size();i++){
        int left=i-pse[i];
        int right=nse[i]-i;

        total=(total+(right*left *1LL *nums[i])%mod)%mod;
    
    }
    return (int)total;
}
int main() {
   vector<int> arr= {3, 1, 2, 4};

    cout << sumOfSubarrayMinimumOptimal(arr) << endl; // Output: 17
}