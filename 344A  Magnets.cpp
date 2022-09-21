//344A  Magnets
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int cnt=0;
    int m=n;
    string s1,s2;
    cin>>s1;
    string s0l;
    while(n>1)
    {   n--;
        cin>>s2;
        if(s1==s2)
        {
            cnt++;
        }
        s1=s2;
    }
    if(cnt!=0)
    {
        cout<<cnt<<endl;
    }
    else
    {
        cout<<m<<endl;
    }
}
