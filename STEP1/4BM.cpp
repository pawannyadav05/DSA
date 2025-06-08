#include <bits/stdc++.h>
using namespace std;

void m1(){
    int n;
    cout<<"Enter The Number: ";
    cin>>n;

    while(n>0){
        cout<<n%10<<endl;
        n = n/10;
    }
}
void m2(){
    int n,c=0;
    cout<<"Enter The Number: ";
    cin>>n;

    while(n>0){
        n = n/10;
        c+=1;
    }
    cout<<"No. of digits is: "<<c<<endl;
}

void m2sc(){
    int n;
    cin>>n;

    int c = (int)log10(n);
    cout<<"Length of The Number is: "<<c+1<<endl;
}

void m3(){
    //reverse of a number
    int n;
    cin>>n;

    //do a dry run
    int r = 0;
    while(n>0){
        int ld = n%10;
        r  =(r*10)+ld;
        n=n/10;
    }
    cout<<"Reverse of the num is: "<<r;
}

void m4(){
    //palindrom
    int n;
    cin>>n;
    int x=n;
    int r = 0;
    while(n>0){
        int ld = n%10;
        r = (r*10) + ld;
        n=n/10;
    }
    if(x==r){
        cout<<"True";
    }else{
        cout<<"False";
    }


}

void m5(){
    int n;
    int s=0;
    cin>>n;
    int x = n;
    while(n>0){
        int ld = n%10;
        s = s+(ld*ld*ld);
        n = n/10;
    }
    if(x==s){
        cout<<"True";
    }else{
        cout<<"False";
    }
}

void m6(){
    int n;
    cout<<"Enter The Number : ";
    cin>>n;
    for(int i=1;i<=n;i++){
        if(n%i==0){
            cout<<i<<" ";
        }
    }

}

void m7() {
    int n;
    cout << "Enter The Number: ";
    cin >> n;
    
    if (n <= 1) { 
        cout << "False";
        return;
    }

    int f = 0;
    for (int i = 1; i <= n; i++) { 
        if (n % i == 0) {
            f += 1; 
        }
    }

    if (f == 2) {
        cout << "True"; 
    } else {
        cout << "False"; 
    }
}

void m8(){
    int n1,n2;
    int g=0;
    cout<<"Enter the 1st Number:";
    cin>>n1;
    cout<<"Enter the 2nd Number:";
    cin>>n2;

    for(int i = 1;i<=min(n1,n2);i++){
        if(n1%i==0 && n2%i==0){
            g = i;
        }
    }
    cout<<g;
}
int  main(){
    // m1();
    // m2();
    // m2sc();
    // m3();
    // m4();
    // m5();
    // m6();
    // m7();
    m8();
    return 0;
}