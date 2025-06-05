//cpp to find sum of both primary and secondary diagonals of a matrix while taking the ceonter value only once
#include<iostream>
#include<algorithm>
#include<string>
#include <limits.h>

using namespace std;

int main(){ 
    int row=3 , col=3 ,sum=0 , n=3;
    int mat[3][3]={{1,2,3},{2,4,5},{3,5,7}};

    for(int i=0;i<row;i++){
        sum+=mat[i][i];
        if(i !=n-i-1){
            sum+=mat[i][n-i-1]; //we avoid double-counting it using if(i != n-i-1)
        }
    }

    cout<<"sum of the diagonals is "<<sum<<endl;
}