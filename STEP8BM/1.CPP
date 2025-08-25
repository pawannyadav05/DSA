#include <bits/stdc++.h>
using namespace std;

string converttoBinary(int x){
    string res;
    while(x!=0){
        if(x%2==1) res+="1";
        else res+="0";
        x/=2;
    }
    reverse(res.begin(),res.end());
    return res;
}

int converttoDecimal(string x){
    int len=x.length();
    int cnt=0,ans=0;
    for(int i=len-1;i>=0;i--){
        if(x[i]=='1'){
            ans+=pow(2,cnt);
        }  
        cnt++;
    }
    return ans;
}
void interchangeNum(int &a,int &b){
    a=a^b;
    b=a^b;
    a=a^b;
}
bool checkithbitleft(int x,int i){
    if((x &(1<<i))==0) return false;
    else return true;
}
bool checkithbitright(int x,int i){
    if((x>>i & 1)==0) return false;
    else return true;
}

int setiThbit(int x,int i){
    x=(x|(1<<i));
    return x;
}
int clearIthbit(int x,int i){
    x=(x& ~(1<<i));
    return x;
}

int toggleIthbit(int x,int i){
    x=(x^(1<<i));
    return x;
}
int removelastsetBit(int x){
    x=x&(x-1);
    return x;
}
bool checkpowerof2(int n){
    if(n&(n-1)==0) return true;
    else return false;
}
int countNoofSetBit(int x){
    int cnt=0;
    while(x>0){
        cnt+=(x&1);
        x=x>>1;
    }
    if(x==1) cnt++;

    return cnt;
}
int countNoofSetBit2(int x){
    int cnt=0;
    while(x!=0){
        x=x&(x-1);
        cnt++;
    }
    return cnt;
}
int noOffliptoConvert(int start,int goal){
    int ans=start^goal;
    return countNoofSetBit2(ans);
}
vector<vector<int>> powerset(vector<int>a){
    int l=a.size();
    int sub=1<<l;
    vector<vector<int>>ans;
    for(int i=0;i<sub;i++){
        vector<int>t;
        for(int j=0;j<l;j++){
            if(i&(1<<j)){
                t.push_back(a[j]);
            }
        }
        ans.push_back(t);
    }
    return ans;
}
int main(){
    int ans=noOffliptoConvert(8,7);
    cout<<ans;
}