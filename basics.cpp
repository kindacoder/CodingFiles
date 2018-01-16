#include<iostream>
using namespace std;
int main(){
    int a=10;
    int *p;
    p=&a;
    cout<<p<<endl;
    cout<<p+1<<endl;
    cout<<"Value at address p is :"<<*p<<endl;
    cout<<"Value at address p+1 is :"<<*(p+1)<<endl;


return 0;
}
