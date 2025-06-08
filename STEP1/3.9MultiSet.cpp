#include <bits/stdc++.h>
using namespace std;

void explainMultiset(){
    //Everything is same as of set
    //only store duplictae elements aalso

    multiset<int>ms;
    ms.insert(1);//{1}
    ms.insert(1);//{1,1}
    ms.insert(1);//{1,1,1}

    ms.erase(1);//erase all 1

    int cnt = ms.count(1);//ccount the no. of occurance

    // only a single one erasedd
    ms.erase(ms.find(1));

    // ms.erase(ms.find(1), ms.find(1) +2); showing unknow error



    //rest function same as set
    

}