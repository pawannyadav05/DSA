#include <bits/stdc++.h>
using namespace std;

void explainMap(){
    map<int, int>mpp;

    map<int, pair<int,int>> mpp;

    map<pair<int,int>,int> mpp;

    mpp[1]=2;
    // mpp.emplace({3,1});

    mpp.insert({2,4});

    // mpp[{2,3}]=10; 
    // first wla key h 2nd wla value same like dict

    for(auto it : mpp){
        //like it is pointing {1,2} it.first is 1 and vise versa
        cout<<it.first<<" "<<it.second<<endl;
    }

    cout<<mpp[1]; //print the value of the corrosponding value
    cout<<mpp[5]; //let suppose if that key is not their so system willl print 0 as it is null

    auto it = mpp.find(3);
    cout<< (*(it)).second;

    auto it = mpp.find(5); //if the key is not availavble the it will we pointed at mpp.end means just after the last elements

    //this is the syntax
    auto it = mpp.lower_bound(2);

    auto it = mpp.upper_bound(3);

    //also have erase,swap,size,empty 

}

void explainMultiMap(){
    // everything is same as map only it only store multiple keys
    //only mpp[key] cannot used here
}

void explainUnorderdMap(){
    // same as set and unorderded _set difference
}