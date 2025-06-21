#include <bits/stdc++.h>
using namespace std;
void setmatrixzerobetter(){
    int matrix[3][4] = {
    {1, 2, 0, 4},
    {5, 0, 7, 8},
    {9, 10, 11, 0}
};
    int col[4]={0};
    int row[3]={0};
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            if(matrix[i][j]==0){
                row[i]=0;
                col[j]=0;
            }
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            if(row[i]==0 || col[j]==0){
                matrix[i][j]=0;
            }
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout<<matrix[i][j];
        }
        cout<<"\n";
    }
    //o(n2)
    
}

int main(){
    setmatrixzerobetter();
}