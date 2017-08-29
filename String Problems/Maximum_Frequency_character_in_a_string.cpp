#include<iostream>
#include<cstring>
using namespace std;
void maxfreq(char *s,int count,int max)
{
    char ch;
    count=1;
    int len=strlen(s);
    for(int i=0;i<len;i++)
    {
        if(s[i]==s[i+1])
        {
         count++;
        }
        else if(count>max)
        {
            max=count;
            count=1;
            ch=s[i];
        }
        else
        {
            continue;
        }

    }
    cout<<ch;
}
int main()
{
    char s[100];
    cin.getline(s,100);
    int max=0,count;

    maxfreq(s,count,max);
}
