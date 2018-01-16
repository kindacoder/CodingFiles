#include<iostream>
using namespace std;
int main(){
int a=1025;
int *p;
p=&a;
cout<<"Size of an integer variable is :"<<sizeof(int)<<" Bytes"<<endl;
cout<<"Address is :"<<p<<" And  Value is :"<<*p<<endl;
void *q;
q=p; //we don't need to typecast here-
cout<<q<<endl;
cout<<*q<<endl;  ///this line will give an error because q is a void pointer- we can not dereference it.
cout<<q+1<<endl;

return 0;
}

