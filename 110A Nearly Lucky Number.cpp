//110A Nearly Lucky Number
#include<iostream>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int n=s.size();
    int cnt=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='4'||s[i]=='7')
            cnt++;
    }
    if(cnt==4||cnt==7)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }

}

