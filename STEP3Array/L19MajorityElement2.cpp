#include <bits/stdc++.h>
using namespace std;
vector<int> majorityelementbetter(){
    int a[]={1,1,1,1,3,2,2,2};
    vector<int> ans;
    map<int,int>mpp;
    int mini=(int)(8/3)+1;
    for(int i=0;i<8;i++){
        mpp[a[i]]++;
        if(mpp[a[i]]==mini){
            ans.push_back(a[i]);
        }
        if(ans.size()==2) break;
    }
    sort(ans.begin(),ans.end());
    return ans;
}

 
int main(){

}