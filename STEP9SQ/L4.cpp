#include <iostream>
using namespace std;

class stackk{
    stack<pair<int,int>> st;
    void push(int val){
        if(st.empty()) st.push({val,val});
        else{
            st.push({val,min(val,st.top().second)});
        }
    }
    int getMin(){
        return st.top().second;
    }
    int top(){
        return st.top().first;
    }
};
int main(){
    return 0;
}