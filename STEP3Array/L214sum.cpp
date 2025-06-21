#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> fourSumbetter(){
    int a[]={1,0,-1,0,-2,2};
    int t=0;
    set<vector<int>>st;
    int s=sizeof(a)/4;
    for(int i=0;i<s;i++){
        for(int j=i+1;j<s;j++){
            set<int>mpp;
            for(int k=j+1;k<s;k++){
                int ts=t-(a[i]+a[j]+a[k]);
                if(mpp.find(ts)!=mpp.end()){
                    vector<int>temp={a[i],a[j],a[k],ts};
                    sort(temp.begin(),temp.end());
                    st.insert(temp);
                }
                mpp.insert(a[k]);
            }
        }
    }
    vector<vector<int>> ans={st.begin(),st.end()};
    return ans;
}
vector<vector<int>> fourSumbrute(){
    int a[]={1,0,-1,0,-2,2};
    int t=0;
    set<vector<int>>st;
    int s=sizeof(a)/4;
    for(int i=0;i<s;i++){
        for(int j=i+1;j<s;j++){
            for(int k=j+1;k<s;k++){
                for(int l=k+1;l<s;l++){
                    if(a[i]+a[j]+a[k]+a[l] ==t){
                        vector<int>temp={a[i],a[j],a[k],a[l]};
                        sort(temp.begin(),temp.end());
                        st.insert(temp);
                    }
                }
            }
        }
    }
    vector<vector<int>> ans={st.begin(),st.end()};
    return ans;
}
vector<vector<int>> foursomeoptimal(){
    int target=8;
    vector<vector<int>>ans;
    int a[]={1,1,1,2,2,2,3,3,3,4,4,4,5,5};
    int s=sizeof(a)/a[0];
    for(int i=0;i<s;i++){
        if(i>0 && a[i]==a[i-1]) continue;
        for(int j=i+1;j<s;j++){
            if(j!=(i+1) && a[j]==a[j-1]) continue;
            int k=j+1;
            int l=s-1;
            while(k<l){
                long long sum=a[i];
                sum+=a[j];
                sum+=a[k];
                sum+=a[l];
                if(sum==target){
                    vector<int>temp={a[i],a[j],a[k],a[l]};
                    ans.push_back(temp);
                    k++,l--;
                    while(k<l && a[k]==a[k-1]) k++;
                    while(k<l && a[l]==a[l+1]) l--;
                }
                else if(sum<target) k++;
                else l--;
            }
        }
    }
    return ans;
}
int main(){

}