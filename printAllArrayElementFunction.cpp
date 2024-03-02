#include<iostream>
using namespace std;
void printArray(int a[],int n){
    cout<<"The elements of the array are: "<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}
int main(){
    int a[]={1,2,3,4,5};
    int n=sizeof(a)/sizeof(a[0]);
    cout<<"The number of elements in array: "<<n<<endl;
    printArray(a,n);
}
