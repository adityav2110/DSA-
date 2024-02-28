#include<iostream>
using namespace std;
int main(){
    //declaration 1
    int a[3][2]={1,2,3,4,5,6}; //3 arrays each of size 2
    //declaration 2
    int b[3][2]={{1,2},{5,6},{9,10}}; //3 arrays each of size 4

    //printing outputs of 2d array
    for(int i=0;i<3;i++){ //outer loop for row
        for(int j=0;j<2;j++){ //inner loop for column
            cout<<a[i][j]+b[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}

