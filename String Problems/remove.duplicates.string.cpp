///Remove all duplicates from a given string
#include<iostream>
#include<cstring>
#include<bits/stdc++.h>
using namespace std;
void RemoveDuplicates(char *s)
{

    int len=strlen(s);
    sort(s,s+len-1);
    char OriginalString[50];
    int j=0;
    for(int i=0;i<len;i++)
    {
        if(s[i]!=s[i+1])
        {
           OriginalString[j]=s[i];
           j++;
        }

    }
    for(int i=0;i<j;i++)
    {
        cout<<OriginalString[i]<<" ";
    }
}

int main()
{
    char s[100];
    cin.getline(s,100);
    RemoveDuplicates(s);

}
