#include <iostream>
using namespace std;

void print1(int n=5){
    for(int i = 0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}
void print2(int n=5){
    for(int i = 0;i<n;i++){
        for(int j=0;j<i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}
void print3(int n=5){
    for(int i = 0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<j+1<<" ";
        }
        cout<<endl;
    }
}
void print4(int n=5){
    for(int i = 0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<i+1<<" ";
        }
        cout<<endl;
    }
}
// void print5(int n=5){
//     for(int i = 5;i>0;i--){
//         for(int j=0;j<i;j++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
// }

// striver method
void print5(int n=5){
    for(int i = 1;i<=5;i++){
        for(int j=0;j<n-i+1;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

void print7(int n){
    for(int i=0;i<n;i++){
        //space
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        //star
        for(int j=0;j<(2*i+1);j++){
            cout<<"*";
        }
        //space
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        cout << endl;
    }
    
}
void print8(int n){
    for(int i=0;i<n;i++){
        //space
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        //star
        for(int j=0;j<(2*n-(2*i+1));j++){
            cout<<"*";
        }
        //space
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        cout << endl;
    }
    
}
//pattern 9 is add up of 7 and 8
//pattern 10 is add up of 2 and 5

void print11(int n){
    int start= 1;
    for(int i =0;i<n;i++){
        if(i%2==0) start = 1;
        else start = 0;
        for(int j=0;j<=i;j++){
            cout<<start;
            start = 1- start;
        }
    cout<<endl;
    }
}

//p12 imp
void print12(int n){
    for(int i =0;i<=n;i++){
        //num
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        for(int j=1;j<=(2*(n-i)-2);j++){
            cout<<" ";
        }
        for(int j=i;j>=1;j--){
            cout<<j;
        }
        cout<<endl;
    }
}

void print13(int n){
    int num=1;
    for(int i=0;i<n;i++){
        for(int j=1;j<=i+1;j++){
            cout<<num;
            num+=1;
        }
        cout<<endl;
    }
}

void print14(int n){
    for(int i=0;i<n;i++){
        for(char ch = 'A';ch<='A'+i;ch++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}
//pattern 15 is reverse of p14

void print16(int n){
    for(int i=0;i<n;i++){
        char ch = 'A'+i;
        for(int j=0;j<=i;j++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int n=5;
    print8(n);
}