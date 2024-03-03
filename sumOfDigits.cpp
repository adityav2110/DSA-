#include <iostream>
using namespace std;
void digR(int a){
    int b=0;
    while(a!=0){
        int c=a%10;
        b+=c;
        a/=10;
    }
    cout<<b;
}
int main(){
    int a;
    cout<<"Enter a number: ";
    cin>>a;
    digR(a);
}
