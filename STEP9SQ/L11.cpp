#include <iostream>
using namespace std;

vector<int> astriodCollision(vector<int>v){
    vector<int>st;
    for(int a:v){
        if(a>0) st.push_back(a);
        else{
            while(!st.empty()&& st.back()>0 && st.back()<abs(a)){
                st.pop_back();
            }
            if(!st.empty() && st.back()==abs(a)){
                st.pop_back();
            }
            else if(st.empty() || st.back()<0){
                st.push_back(a);
            }
        }
    }
    return st;
}
int main(){

}