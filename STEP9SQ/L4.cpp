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
class MinStack{
    stack<int>st; int min=INT_MAX;
    public:
        void push(int val){
            if(st.empty()){
                min=val;
                st.push(val);
            }
            else{
                if(val>min) st.push(val);
                else{
                    st.push(2*val - min);
                    min=val;
                }
            }
        }
        void pop(){
            if(st.empty()) return;
            int x=st.top();
            st.pop();
            if(x<min){
                min=2*min -x;
            }
        }
        int top(){
            if(st.empty()) return;
            int x=st.top();
            if(min<x) return x;
            return min;
        }
        int getMin() {return min;}
};
int main(){
    return 0;
}