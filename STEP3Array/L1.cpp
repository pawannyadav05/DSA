#include <bits/stdc++.h>
using namespace std;
//max size of array outside main is 10^7 inside main is 10^6
void fLargest(){
    // to find largest element inn an array is to bubble sort then acess last element also this is brute force
    int a[]={3,2,1,5,2};
    int le=a[0];
    for(int i=1;i<sizeof(a)/4;i++){
        if(a[i]>le) le=a[i];
    }
    cout<<le;
}

int f2Largest(){
    //brute is to sort the given array and the access it by index n-2 but it will not work  is last elements are same
    // aother option is to loop from n-2 to 0 and return the first number which is not same from the greatest number (nlogn+o(n))


    //better 
    // first find the largest first then take sle=-1 assuming array is having no negative numberif it has then take int_max
    // loop till n-1 if any number is grater thenn sle and less then ge assign it into sle return after loop ends;

    //optimal
    int a[]={2,7,1,6,9,4,42};
    int slarg=INT_MIN;
    int larg=a[0];
    for(int i=1;i<sizeof(a)/4;i++){
        if(a[i]>larg){
            slarg=larg;
            larg=a[i];
        }else if(a[i]<larg && a[i]>slarg){
            slarg=a[i];
        }
    }
    return slarg;

}

int fSmallest(){
    int a[]={2,7,1,6,9,4,42};
    int ssmall=INT_MAX;
    int small=a[0];
    for(int i=1;i<sizeof(a)/4;i++){
        if(a[i]<small){
            ssmall=small;
            small=a[i];
        }else if(a[i]>small && a[i]<ssmall){
            ssmall=a[i];
        }
    }
    return ssmall;
}

bool checkSorted(){
    int a[]={1,2,3,4,5};
    for(int i=0;i<5;i++){
        if(a[i-1]>a[i]){
            return false;
            break;
        }
    }
    return true;
}
int removeDuplicate1(){
    int a[]={1,1,2,2,2,3,3,3,3,3};
    //brute solution
    set<int> st;
    for(int i=0;i<10;i++){
        st.insert(a[i]); //take nlogn+0(n)
    }
    int indx=0;
    for(auto it:st){
        a[indx]=it;
        indx++;
    }
    return indx;
    // if all elements are unique then tc is high also take 0(n) extra scape
}

int removeDuplicate2(){
    //optial solution
    //0(n)
    int a[]={1,1,2,2,2,3,3,3,3,3};
    int j=0;
    for(int i=1;i<10;i++){
        if(a[j]!=a[i]){
            a[j+1]=a[i];
            j++;
        }
    }
    return j;
}


int main(){
    cout<<checkSorted();
}