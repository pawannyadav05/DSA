#include <iostream>
using namespace std;

int sumOfSubarrayMinimumBrute(vector<int>a){
    int sum=0;
    int mod=(int)(1e9 +7);

    for(int i=0;i<a.size();i++){
        int mini=a[i];
        for(int j=i;j<a.size();j++){
            mini=min(mini,a[j]);
            sum=(sum+mini)%mod;
        }
    }
    return sum;
}
int main(){

}