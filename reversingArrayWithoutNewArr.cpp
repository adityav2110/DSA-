#include<iostream>
using namespace std;
int main(){
    int a[5]={1,2,3,4,5};
    int l=0;
    int r=4;
    while(l<r){
        swap(a[l],a[r]); //swap funtion
        l++;
        r--;
    }
    for(int i=0;i<5;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}
