#include <bits/stdc++.h>
using namespace std;
vector<int> priviousSmallerElement(vector<int>nums){
    int n=nums.size();
    vector<int>ans(n,-1);
    stack<int>st;
    for(int i=0;i<n;i++){
        while(!st.empty() && st.top()>=nums[i]){
            st.pop();
        }
        if(!st.empty()) ans[i]=st.top();

        st.push(nums[i]);
    }
    return ans;
}
vector<int> nSE(vector<int>nums){
    int n=nums.size();
    vector<int>ans(n,-1);
    stack<int>st;
    for(int i=n-1;i>=0;i--){
        while(!st.empty() && st.top()>=nums[i]){
            st.pop();
        }
        if(!st.empty()) ans[i]=st.top();

        st.push(nums[i]);
    }
    return ans;
}
int main() {
    vector<int> nums = {4, 10, 5, 8, 20, 15, 3, 12};
    vector<int> ans =nSE(nums);

    for (int x : ans) cout << x << " ";
    return 0;
}