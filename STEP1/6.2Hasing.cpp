#include <bits/stdc++.h>
using namespace std;

/*int main(){
    string s;
    cin>>s;

    //pre compute
    int hash[26]={0};
    for(int i=0;i<s.size();i++){
        hash[s[i]-'a']++;
    }

    int q;
    cin>>q;
    while(q--){
        char c;
        cin>>c;
        //fect
        cout<<"Count of "<<c<<" is "<<hash[c-'a'];
    }

    return 0;
}*/

// above code is for specific to lower key alphabets


//this one is valid for all the charcter
int main(){
    string s;
    cin>>s;

    //pre compute
    int hash[256]={0};
    for(int i=0;i<s.size();i++){
        hash[s[i]]++;
    }

    int q;
    cin>>q;
    while(q--){
        char c;
        cin>>c;
        //fect
        cout<<"Count of "<<c<<" is "<<hash[c];
    }

    return 0;
}