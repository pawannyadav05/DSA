#include <bits/stdc++.h>
using namespace std;
void leftrotatebyoneplace(){
    int a[]={1,2,3,4,5};
    //space used in the algo is 0(n)
    //space extra used by algo is 0(1)
    int temp=a[0];
    for(int i=0;i<4;i++){
        a[i]=a[i+1];
    }
    a[4]=temp;
    for(int i=0;i<5;i++){
        cout<<a[i]<<" ";
    }
}
void leftrotatebyDplaceBrute(){
    //brute
    int n=5; 
    int a[]={1,2,3,4,5};
    int d=3;
    d=d%n;
    int temp[]={1,2,3};
    for(int i=d;i<n;i++){
        a[i-d]=a[i];
    }
    for(int i=0;i<d;i++){
        a[i+n-d]=temp[i];
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}
void leftrotatebyDplaceOptimal(){
    int n=7;
    int arr[]={1,2,3,4,5,6,7};
    int d=3;
    reverse(arr,arr+d);
    reverse(arr+d,arr+n);
    reverse(arr,arr+n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
void movezeroatend(){
    int a[]={1,0,2,3,2,0,0,4,5,1};
    int n=10;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1;j++){
            if(a[j]==0) swap(a[j],a[j+1]);
        }
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}
void movezeroatendoptimal(){
    int a[]={1,0,2,3,2,0,0,4,5,1};
    int n=10;
    int j=-1;
    for(int i=0;i<n;i++){
        if(a[i]==0){
            j=i;
            break;
        }
    }
    for(int i=j+1;i<n;i++){
        if(a[i]!=0){
            swap(a[i],a[j]);
            j++;
        }
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}
int main(){
    movezeroatendoptimal();
}