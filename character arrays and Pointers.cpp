///A string in C has to be null terminated.
#include<iostream>
using namespace std;
int main(){
//char a[5];
//a[0]='a';
//a[1]='s';
//a[2]='h';
//a[3]='u';
//a[4]='\0';
///or we can write it like this-
///char a[]="ashu";
///Or one more method to do it-
///char a[]={'a','s','h','u','\0'};

char a[6]="Hello";
///char* p=a;
///cout<<*p<<endl;
///cout<<*(p+1)<<endl;
///cout<<*(p+2)<<endl;
///cout<<*a<<endl;
///cout<<*(a+1)<<endl;
///cout<<*(a+2)<<endl;
cout<<a<<endl;
///cout<<a+1<<endl;  Result- ello
return 0;
}
