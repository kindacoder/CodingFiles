#include<iostream>
using namespace std;
void print(char *a){
    int i=0;
while(a[i]!=0){
    cout<<a[i]<<" ";
    i++;
}
cout<<endl;
}
///Or we can write it like this-


///void print(char *a){
///while(*c!='\0'){
///cout<<*c;
///c++;
///}
///}


int main(){
char a[]="Hello";
print(a);
return 0;
}
