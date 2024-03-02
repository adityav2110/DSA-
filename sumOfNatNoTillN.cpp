#include<iostream>
using namespace std;
void sum(int a,int n){
    for(int i=1;i<=n;i++){
        a+=i;
    }
    cout<<a;
    return;
}
int main(){
    int a=0;
    int n;
    cout<<"Enter the number to the extent you want to find the sum: ";
    cin>>n;
    sum(a,n);
}
