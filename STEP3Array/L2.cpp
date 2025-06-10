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
    //brute
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
// imp 
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
int linearsearch(){
    int ar[]={6,7,8,4,1};
    int num=8;
    int indx=-1;
    for(int i=0;i<5;i++){
        if(num==ar[i]){
            return i;
        }
    }
    return -1;
}

//union of two sorted array
void bruteftwosortedarray(){
    set<int> st;
    int a1[]={1,1,2,3,4,5};
    int a2[]={2,3,4,4,5,6};
    for(int i=0;i<6;i++){
        st.insert(a1[i]);
    }
    for(int i=0;i<6;i++){
        st.insert(a2[i]);
    }
    int unionar[st.size()];
    int i=0;
    for(auto it:st){
        unionar[i++]=it;
    }
    //watch tc and sc in lect 2 48:00
}
void optimaltwosortedarrayunion(){
    int a1[]={1,2,3,4,6};
    int a2[]={2,3,5};
    int s1= sizeof(a1)/4;
    int s2= sizeof(a2)/4;
    int i=0,j=0;
    vector<int> unionArry;
    while(i<s1 && j<s2){
        if(a1[i]<=a2[j]){
            if((unionArry.size()==0) || unionArry.back()!=a1[i]){
                unionArry.push_back(a1[i]);
            }
            i++;
        }else{
            if((unionArry.size()==0) || unionArry.back()!=a2[j]){
                unionArry.push_back(a2[j]);
            }
            j++;
        }
    }
    while(j<s2){
        if((unionArry.size()==0) || unionArry.back()!=a2[j]){
                unionArry.push_back(a2[j]);
            }
            j++;
    }
    while(i<s1){
        if((unionArry.size()==0) || unionArry.back()!=a1[i]){
                unionArry.push_back(a1[i]);
            }
            i++;
    } 
    //we can return the vector  
}

int main(){
    
}