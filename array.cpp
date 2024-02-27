#include <iostream>
using namespace std;
int main(){
    //declaration of array
    int arr[5]={1,2,3,4,5};
    for(int i=0;i<5;i++){
        cout<<arr[i]<<endl; //print the original array
    }
    //updating specific element of array
    cout<<endl;
    arr[2]=10;
    for(int i=0;i<5;i++){
        cout<<arr[i]<<endl; //print new value of array
    }
    return 0;
}
