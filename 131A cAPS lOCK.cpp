//131A cAPS lOCK
#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int n=s.size();
    int up=0;
    int lw=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]>=65&&s[i]<=90)
        {
            up++;
        }
        else
        {
            lw++;
        }
    }
    if(up==n&&lw==0)
    {
        transform(s.begin(),s.end(),s.begin(),::tolower);
        cout<<s<<endl;
    }
    else
    {
        if((s[0]>=97&&s[0]<=122)&&up==n-1)
        {
            transform(s.begin(),s.end(),s.begin(),::tolower);
            s[0]=toupper(s[0]);
            cout<<s<<endl;
        }
        else
        {

            cout<<s<<endl;
        }
    }

}
//comment : accepted 31-05-2021
