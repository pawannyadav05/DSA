#include <bits/stdc++.h>

using namespace std;
//monotonic stack
vector<int> ngeBrute(){
    int ar[]={6,0,8,1,3};
    int n=5;
    vector<int> ans;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(ar[j]>ar[i]){
                ans[i]=ar[j];
                break;
            }
        }
    }
    return ans; //o(n^2)
}

vector<int> ngeBetter(){
    vector<int>q={4,12,5,3,1,2,5,3,1,2,4,6};
    stack<int> st; vector<int> ans(q.size(),-1);
    for(int i=(q.size())-1;i>=0;i++){
        while(!st.empty() && st.top()<=q[i]){
            st.pop();
        }
        if(st.empty()) ans[i]=-1;
        else ans[i]=st.top();

        st.push(q[i]);
    }
    return ans;
    //tc worst o(2n)
}
 vector<int> nextGreaterElements(vector<int>& nums) {
        stack<int>st;
        int n=nums.size();
        vector<int>ans(n,-1);
        for(int i=2*n-1;i>=0;i--){
            while(!st.empty() && st.top()<=nums[i%n]){
                st.pop();
            }
            if(i<n){
                ans[i]=st.empty()?-1:st.top();
            }
            st.push(nums[i%n]);
        }
        return ans;
}

int main(){

}
