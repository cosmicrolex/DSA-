#include<iostream>
#include<algorithm>
#include<string>
#include <limits.h>

using namespace std;

int main(){ 
    int matrix[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int row=3 ,col =3;
    int maxrowsum = INT_MIN;

    for(int i=0;i<row;i++){
        int rowsumI=0;
        for(int j=0;j<col;j++){
            rowsumI =rowsumI+matrix[i][j];
        }
        maxrowsum = max(maxrowsum,rowsumI);

    }
    cout<<"maximum row sum is "<<maxrowsum<<endl;
    


}
