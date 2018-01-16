#include<iostream>
using namespace std;
int main(){
char *c="Hello";   ///string gets stored as Compiled time constant-
cout<<c[0]<<endl;
cout<<c<<endl;     ///Hello
cout<<c+1<<endl;
cout<<*c<<endl;    ///H
cout<<*(c+1);      ///e
///c[0]='A';       ///This would not work

return 0;
}
