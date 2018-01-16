#include<iostream>
using namespace std;
void Double(int *a,int n){ ///or We can write this line like this- void Double(int a[],int n)

for(int i=0;i<n;i++){
    cout<<(a+i)<<"  AND  "<<*(a+i)<<endl;;

}

}
int main(){
    int a[]={1,2,3,4,5};
    int n=sizeof(a)/sizeof(int);
    Double(a,n);

return 0;
}

///There is no way to calculate the Size of the array in Double() function because In double() only address of
///first element of the array is passed.
///We can only pass array by Argument.
