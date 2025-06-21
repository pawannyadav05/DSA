#include <bits/stdc++.h>
using namespace std;
void rotatematrix(){
    int matrix[4][4] = {
    {1,  2,  3,  4},
    {5,  6,  7,  8},
    {9, 10, 11, 12},
    {13,14, 15,16}
};
int nmatrix[4][4];
for(int i=0;i<4;i++){
    for(int j=0;j<4;j++){
        nmatrix[j][4-1-i]=matrix[i][j];
    }
}
// take extra space of o(n2)
}
//
// optimal solution is 
// pehlr hm transpose kr denge then reverse each row
int main(){

}