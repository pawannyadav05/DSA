#include <iostream>
using namespace std;

int tapingRainWaterBrute(vector<int>v){
    int total=0;
    for(int i=0;i<v.size();i++){
        int leftH = v[i];
        for (int j = 0; j <= i; j++) {
            leftH = max(leftH, v[j]);
        }

        int rightH = v[i];
        for (int j = i; j < v.size(); j++) {
            rightH = max(rightH, v[j]);
        }
        if(v[i]<leftH && v[i]<rightH){
            total+=min(leftH,rightH)-v[i];
        }
    }
    return total;
}
int tapingRainwaterOptimal(vector<int>h){
    int lMax,rMax,total;
    int l=0,r=h.size()-1;
    lMax=rMax=total=0;

    while(l<r){
        if(h[l]<=h[r]){
            if(lMax> h[l]) total+=lMax-h[l];
            else lMax=h[l];
            l+=1;
        }
        else{
            if(rMax> h[r]) total+=rMax-h[r];
            else rMax=h[r];
            r-=1;
        }
    }
    return total;
}

int main(){
    
}