#include<iostream>
using namespace std;
int main(){
    int a[5]={1,7,5,15,2};
    int maxele=a[0];
    for(int i=0;i<5;i++){
        if(a[i]>maxele){
            maxele=a[i];
        }
    }
    cout<<"The max element of the array is: "<<maxele;
    return 0;
}
