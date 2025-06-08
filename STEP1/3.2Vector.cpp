#include <bits/stdc++.h>
using namespace std;

void explainVector(){
    vector<int> v;
    /*vector ek array k jaisa h but ye 
    dynamic h isme hm element add krskte 
    but array jitne ka defined h utna hi 
    add ho skta husee jyda nhi */

    v.push_back(1);
    v.emplace_back(2); //is faster then push_back

    vector<pair<int,int>>vec;

    vec.push_back({1,2}); 
    vec.emplace_back(1,2);
    /*here we have a pair to insert using 
    push_back that's why we need {} else 
    in emplace_back we dont require it */

    vector<int> v(5, 100); 
    //mean {100,100,100,100,100}

    vector<int> v(5);
    //means {0,0,0,0,0}

    vector<int> v1(5, 200);
    vector<int> v2(v1);
    //we are here creating copy of v1 in v2

    vector<int>::iterator it = v.begin();
    //pointing the adrres not the first element thus we will use * to  print it

    it++;
    cout << *(it)<<" ";

    it =it+2;
    cout<<*(it)<<" ";

    vector<int>::iterator it = v.end();
    //it will not point to the last insted of this it will point after last element thus we use it-- insted of it++

    
    ////ignore 2 line after it////
    // vector<int>::iterator it = v.rend();

    // vector<int>::iterator it = v.rbegin();

    cout<<v[0]<<" "<<v.at(0); //both of them mean same

    cout<<v.back()<<" ";

    for(vector<int>::iterator it = v.begin();it!=v.end();it++){
        cout<<*(it)<<" ";
    }

    for (auto it = v.begin();it != v.end();it++){

    }

    for(auto it : v){
        cout<<(it)<<" ";
    }

    //{10,20,30,40}
    v.erase(v.begin()+1); //will delete 20

    //{10,20,30,40,50,60}
    v.erase(v.begin()+2,v.begin()+4);//will delete 30,40

    //Insert Function
    vector<int>x(2,100); //{100,100}
    x.insert(x.begin(),300); //{300,100,100}

    x.insert(x.begin()+1,2,10); //{300,10,10,100,100}
    //basiclly in ( first we have positon followed by no. of items we want to add the afterward what we want to add)

    vector<int> copy(2,50);//{50/50}
    v.insert(v.begin(),copy.begin(),copy.end());

    cout<<v.size();//2

    v.pop_back();//pop the last element

    //v1 ->{10,20}
    //v1 ->{30,40}
    v1.swap(v2); //v1->{30,40} , v2->{10,20}

    v.clear(); //erase the entire vector

    cout<<v.empty();

     
}


int main(){
    
    return 0;
}