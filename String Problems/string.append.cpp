#include<iostream>
#include<String.h>
using namespace std;
void append(char *a, char *b)
{
    int i=strlen(a);
    int j=0;
    while(b[j]!='\0')
    {
        a[i]=b[j];
        i++;
        j++;
    }
a[i]='\0';
}


int main()
{
char a[100],b[100];
cin.getline(a,100);
cin.getline(b,100);
append(a,b);
cout<<a<<endl;


return 0;
}

