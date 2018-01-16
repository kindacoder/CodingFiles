#include<iostream>
using namespace std;
int main(){
int a[5]={1,2,3,4,5};
int* p=a;
cout<<p<<endl;
cout<<p+1<<endl;
cout<<p+2<<endl;
cout<<p+3<<endl;
cout<<*a<<endl;
cout<<*(a+1)<<endl;
cout<<*(a+2)<<endl;
///simply writing name of array gives us the Address of 1st element of the array.
///or we can write Like this-
int *q=&a[0];
cout<<q+1<<endl;
cout<<q+2<<endl;
cout<<q+3<<endl;
cout<<*q<<endl;
cout<<*(q+1)<<endl;
cout<<*(q+2)<<endl;

///for retrieving the address of Index i =>
///We would write- &a[i] OR a+i;
///for retrieving the value at Index i =>
///We would write- a[i] OR *(a+i);


///simply using a will give us the base address or the address of 1st element of the array.
///total element in the array-
int n=sizeof(a)/sizeof(int);
for(int i=0;i<n;i++){
    cout<<*(a+i)<<endl;
    cout<<a[i]<<endl;
}


return 0;
}
