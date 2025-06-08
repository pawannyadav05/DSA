#include <bits/stdc++.h>
using namespace std;

void bubble_sort(int arr[],int n){
    //push the max to the last by adjcent swapp until whole sorted
    for(int i=0;i<n;i--){
        int didSwap=0;
        for(int j=0;j<i;j++){
            
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                didSwap=1;
            }
        }
        if(didSwap==0) break;
        cout<<"runs\n";
    }
    
}
/*if we have takenj<=i this is wrong as the
 last element dont have element beyond it 
 but phir bhi agar hm run kiye to runtime error ayeg*/
/*worst tc if o(n^2)  also the average agar didswap wli chiz na kre toh
else tc will we o(n)
best case is when we pass a sorted array
like if we pass a sortef array and dont use the did swap then its will do the whole stuff for the entier element
which consume aloot time that why */

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    bubble_sort(arr,n);
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
    return 0;
}