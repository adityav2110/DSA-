#include<iostream>
using namespace std;
void range(int a,int b){
    while(a<=b){
        cout<<a<<" ";
        a++;
    }
}
int main(){
    int a,b;
    cin>>a;
    cin>>b;
    range(a,b);
}
