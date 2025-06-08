#include <bits/stdc++.h>
using namespace std;

void explainSet(){
    set<int>s;
    //set store unique but in sorted way   
    s.insert(1);//{1}
    s.emplace(2);//{1,2}
    s.insert(4);//{1,2,4}
    s.insert(3);//{1,2,3,4}
    

    /*functionality of insert in vector 
    can be used also,that only increase efficiency 
    
    begin(),end(),rbegin(), rend(),size()
    empty() and swap() are same as those of above
    */

    //{1,2,3,4,5}
    auto it = s.find(3); //it means itreator which return addres
    auto it = s.find(6); //it will point to s.end() just after the last element

    //{1,4,5}
    s.erase(5); //will erase 5 || take logarithmic time

    int cnt = s.count(1); // if element exist ut will return 1 else 0

    auto it = s.find(3);
    s.erase(it); //will erase 3

    //{1,2,3,4,5}
    auto it1 = s.find(2);
    auto it2 = s.find(4);
    s.erase(it1,it2); //will erase 2,3

    //lower_bound and upper_bound function work in the same way as in vector

    auto it = s.lower_bound(2); //it will point to 2
    auto it = s.upper_bound(2); //it will point to 3


    //lowerbound and upper bound utube video
    



}