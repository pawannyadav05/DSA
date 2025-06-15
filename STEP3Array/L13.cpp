#include <bits/stdc++.h>
using namespace std;
bool linearserch(int arr[],int s,int target){
    for(int i=0;i<s;i++){
        if(target==arr[i]){
            return true;
        }
    }
    return false;
}
int longestconsicutivesequencebrute(){
    int longest=1;
    int a[]={102,4,100,1,101,3,2,1,1};
    for(int i=0;i<9;i++){
        int x=a[i];
        int count=1;
        while(linearserch(a,9,x+1)==true){
            x+=1;
            count+=1;
        }
        longest=max(longest,count);
    }
    return longest;
//o(n2)
}
int longestconsicutivesequencebetter(){
   //sort the array;
    int a[]={1,1,1,2,2,2,3,3,4,100,101,101,102};
    int lastSmaller=INT_MIN;
    int cnt=0;
    int longest=1;
    for(int i=0;i<13;i++){
        if(a[i]-1==lastSmaller){
            cnt+=1;
            lastSmaller=a[i];
        }else if(lastSmaller!=a[i]){
            cnt=1;
            lastSmaller=a[i];
        }
        longest=max(longest,cnt);
    }
    return longest;
}

int logestconsecutivesequenceoptimal(){
    int a[]={102,4,100,1,101,3,2,1,1};
    int n=9;
    if(n==0) return 0;
    int cnt=0;
    int longest=1;
    unordered_set<int> st;
    for(int i=0;i<n;i++){
        st.insert(a[i]);
    }
    for(auto it:st){
        if(st.find(it-1)==st.end()){
            int cnt=1;
            int x=it;
            while(st.find(x+1)!=st.end()){
                x+=1;
                cnt+=1;
            }
            longest=max(longest,cnt);
        }
    }
    return longest;
}

int main(){
    cout<<longestconsicutivesequencebrute();
}