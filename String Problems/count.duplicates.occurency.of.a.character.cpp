#include<iostream>
#include<cstring>
#include<bits/stdc++.h>
using namespace std;
void CountDuplicates(char *s)
{
    int len=strlen(s);
    sort(s,s+len-1);
    int count=0;
    for(int i=0;i<len;i++)
    {
        if(s[i]==s[i+1])
        {
            count++;
        }
        else
        {
            count=count+1;
            cout<<s[i]<<"   Comes   "<<count<<" times"<<endl;
            count=0;

        }
    }
}
int main()
{
    char s[100];
    cin.getline(s,100);
    CountDuplicates(s);
    return 0;
}
