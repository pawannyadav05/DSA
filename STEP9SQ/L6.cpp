#include <bits/stdc++.h>

using namespace std;
vector<int> ngeIIbrute(){
    vector<int> v={2,10,12,1,11};
    int n=v.size();
    vector<int>ans(n,-1);
    for(int i=0;i<n;i++){
        for(int j=i+1;j<i+n;j++){
            int indx=j%n;
            if(v[indx]>v[i]){
                ans[i]=v[indx];
                break;
            }
        }
    }
    return ans;
}
vector<int> ngeIIoptimal(){
    vector<int>v={};
    int n=v.size();
    vector<int>ans(n,-1);

    return ans;
}
int main(){

}