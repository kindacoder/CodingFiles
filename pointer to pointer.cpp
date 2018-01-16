#include<iostream>
using namespace std;
int main(){
int x=5;
int* p=&x;
*p=6;
int** q=&p;
int ***r=&q;
cout<<*p<<endl;
cout<<*q<<endl;
cout<<**q<<endl;
cout<<**r<<endl;
cout<<***r<<endl;
***r=10;
cout<<"Now x is : "<<x<<endl;
**q=12;
cout<<"Now x is : "<<x<<endl;
*p=15;
cout<<"Now x is : "<<x<<endl;


return 0;
}
