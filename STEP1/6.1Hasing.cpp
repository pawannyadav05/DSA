#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// Hashing 
// prestroing or facting
int main(){
    int n;
    cin>>n;
    int arr[n];
    /*inside an arry which inside int main() 
    we can only declare array up to 10^6 */
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //precomputional part
    int hash[13]={0};
    for(int i=0;i<n;i++){
        hash[arr[i]]+=1;
    }

    int q;
    cin>>q;
    while(q--){
        int num;
        cin>>num;

        //fetch
        cout<<num<<" : "<<hash[num]<<endl;
    }
    return 0;
}//outside an main we can declare an array up to 10^7 

