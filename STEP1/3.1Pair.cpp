#include <bits/stdc++.h>
using namespace std;

void explainPair(){
    pair<int,int> p ={1,3};
    cout<<p.first<<" "<<p.second<<endl;

    pair<int, pair<int,int>> x ={1,{3,4}};
    cout<<x.first<<" "<<x.second.first<<" "<<x.second.second<<endl;

    pair<int,int> arr[]={{1,2},{2,5},{5,1}}; //here pair is treated like a data type which is possible
    cout<<arr[1].second;
}

int main(){
    explainPair();    
    return 0;
}