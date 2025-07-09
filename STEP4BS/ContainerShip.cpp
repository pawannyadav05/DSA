#include <bits/stdc++.h>
using namespace std;
int nofDays(vector<int>a,int cap){
    int d=1,l=0;
    for(int c:a){
        if(l+c>cap){
            d++;
            l=c;
        }else{
            l+=c;
        }
    }
    return d;
}
int main(){

}