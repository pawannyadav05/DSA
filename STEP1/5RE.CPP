#include <bits/stdc++.h>
using namespace std;

// int x=0;
// void r1(){
//     cout<<x;
//     x++;
//     if(x<5){
//         r1();
//     }  
// }

/*Lect 2*/

// void p1(int x,int n){
//     if (x>n) return;
//     cout<<"Pawan"<<endl;
//     p1(x+1,n);
// }

// void p2(int x,int n){
//     if(x>n) return;
//     cout<<x<<" ";
//     p2(x+1,n);
// }

// void p3(int n){
//     if(n<=0) return;
//     cout<<n<<" ";
//     p3(n-1);
// }

void p2m(int i,int n){
    //using backtracking
    if(i<1) return;
    p2m(i-1,n);
    cout<<i<<endl;
}

/*Lect 3*/

void p1m(int i,int sum){
    if(i<1){
        cout<<sum<<" ";
        return;
    }
    p1m(i-1,sum+i);
}

// functional recursion lsct 4

int sum(int n){
    if(n==0) return 0;
    return n+sum(n-1);
}

int fac(int n){
    if(n==0) return 1;
    return n*fac(n-1);
}

//reverse array 
void revarray(int i,int arr[],int n){
    if(i>=n/2) return;
    swap(arr[i],arr[n-i-1]);
    revarray(i+1,arr,n);
}
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++) cin>>arr[i];
//     revarray(0,arr,n);
//     for(int i=0;i<n;i++) cout<<arr[i]<<" ";
//     return 0;
// }

//palindrome
bool ispalindrome(int i,string &s){
    if(i>=s.size()/2) return true;
    if(s[i]!=s[s.size()-i-1]) return false;
    return ispalindrome(i+1,s);
}

//lect 5 recurison

//p1
int facc(int n){
    if (n<=1) return n;
    return facc(n-1)+facc(n-2);
}

int main(){
    int n = 4;
    cout<<facc(n);
}