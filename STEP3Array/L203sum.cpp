#include <bits/stdc++.h>
using namespace std;
vector<vector<int>>Threesumbrute(){
    set<vector<int>> st;
    int a[]={-1,0,1,2,-1,-4};
    int s=sizeof(a)/4;
    for(int i=0;i<s;i++){
        for(int j=i+1;j<s;j++){
            for(int k=j+1;k<s;k++){
                if(a[i]+a[j]+a[k]==0){
                    vector<int>temp={a[i],a[j],a[k]};
                    sort(temp.begin(),temp.end());
                    st.insert(temp);
                }
            }
        }
    }
    vector<vector<int>> ans(st.begin(),st.end());
} //o(n3)+log(nlogn)
vector<vector<int>>Threesumbetter(){
    set<vector<int>> st;
    int a[]={-1,0,1,2,-1,-4};
    int s=sizeof(a)/4;
    for(int i=0;i<s;i++){
        set<int>hashset;
        for(int j=i+1;j<s;j++){
            int third= -(a[i]+a[j]);
            if(hashset.find(third)!=hashset.end()){
                vector<int>temp= {a[i],a[j],third};
                sort(temp.begin(),temp.end());
                st.insert(temp.begin(),temp.end());
            }
            hashset.insert(a[j]);
        }
    }
    vector<vector<int>> ans(st.begin(),st.end());
} //o(n2)+log(nlogn)
int main(){

}