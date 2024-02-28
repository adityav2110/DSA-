#include<iostream>
using namespace std;
int main(){
    //declaration 1
    int a[3][3]={1,2,3,4,5,6,7,8,9}; //valid for square matrix
    cout<<"Type an element you're searching for: ";
    int n;
    cin>>n;

    for(int i=0;i<3;i++){ //outer loop for row
        for(int j=0;j<3;j++){ //inner loop for column
            if(n==a[i][j]){
                cout<<"The location of element in the given matrix is: "<<i<<", "<<j;
            }
        }
    }
    cout<<"Element not found!";

    return 0;
}



