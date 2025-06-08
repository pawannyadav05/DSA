#include <bits/stdc++.h>
using namespace std;

void explainqueue(){
    //fifo
    //first in irst out
    queue<int>q;
    q.push(1);//{1}
    q.push(2);//{2}
    q.emplace(4);//{1,2,4}

    q.back()+=5;//print 9

    cout<<q.back();

    //q is {1,2,9}
    cout<<q.front();//Print 1

    q.pop();//{2,9}

    cout<<q.front();//print 2

    //size swap empty same as stack
}