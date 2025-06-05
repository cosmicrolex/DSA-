//time complexity n^2 because we are using nested loop
#include<iostream>
#include<algorithm>
#include<string>
#include <limits.h>

using namespace std;

int main(){ 
    int row=3 ,col =3;
    int matrix[3][3];
    cout<<"enter the values of matrix for 3*3 matrix"<<endl;
    for(int i=0; i<row;i++){
        for(int j=0; j<col;j++){
            cin>>matrix[i][j];
        }
    }
    int diagonalsum=0;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(j==i){
                diagonalsum =diagonalsum+matrix[i][j];
            }
            
        }
    }
    cout<<"diagonal sum is "<<diagonalsum<<endl;
    


}
