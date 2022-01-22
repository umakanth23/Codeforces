//119A Epic Game
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,n;
    cin>>a>>b>>n;
    int si=0;
    int ansi=0;
    int i=0;
    while(1)
    {
        if(i%2==0)
        {
            int x=__gcd(a,n);
            if(x<=n)
            {
                n=n-x;
                si=1;
                ansi=0;
            }
            else
            {
                break;
            }
        }
        else
        {
            int y=__gcd(b,n);
            if(y<=n)
            {
                n=n-y;
                si=0;
                ansi=1;
            }
            else
            {
                break;
            }
        }
        i++;
    }
    if(si==1)
    {
        cout<<0<<endl;
    }
    else
    {
        cout<<1<<endl;
    }
}
