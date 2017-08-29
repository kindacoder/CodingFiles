#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void FirstChar(char *s)
{
    int len=strlen(s);
    for(int i=1;i<len;i++)
    {
      char current_element=s[i];
      ///check if there is any previous character that is same to the current character-
      for(int j=i-1;j>=0;j--)
      {
          if(current_element==s[j])
            {
                cout<<s[j];
                return;
            }
            else
            {
                continue;
            }
      }
    }
}
int main()
{
    char s[100];
    cin.getline(s,100);
    FirstChar(s);
    return 0;
}
