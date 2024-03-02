#include<iostream>
using namespace std;
int prime(int a){
    for(int i=2;i<a;i++){
        if(a%i==0){
            return 0;
        }
    }
    return 1;
}
int main(){
    int a;
    cout<<"Enter a number: ";
    cin>>a;
    int flag = prime(a);
    if(flag==1){
        cout<<"Prime Number";
    }else{
        cout<<"Not a prime number";
    }
}
