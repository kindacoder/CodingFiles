///Remove characters from the first string which are present in the second string
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void RemoveCharacters(char* s1,char* s2)
{
   int len_of_s1=strlen(s1);
   int len_of_s2=strlen(s2);
   for(int i=0;i<len_of_s1;i++)
   {
     char key=s1[i];
     ///count variable is like flag, if value will change then Character is present in 2nd string.
     int count=0;
     ///Traversing through 2nd string if current element of First element is present or not?
     for(int j=0;j<len_of_s2;j++)
      {
         if(key==s2[j])
          {
             count++;
          }
      }
     if(count==0)
          {
       cout<<key;
          }
   }
}
int main()
{
    char s1[100];
    char s2[100];
    ///Input both strings-
    cin.getline(s1,100);
    cin.getline(s2,100);
    RemoveCharacters(s1,s2);

    return 0;
}

