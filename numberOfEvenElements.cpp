#include <iostream>
using namespace std;
int main(){
    int a[10]={1,2,3,4,8,6,7,11,14,17};
    int count=0;
    for(int i=0;i<10;i++){
        if(a[i]%2==0){
            count++;
        }
    }
    cout<<"number of even elements in the given array is: "<<count<<endl;
    return 0;
}
