//80A Panoramix's Predictionc
#include<iostream>
#include<cmath>
using namespace std;
bool isprime(int n)
{

    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int n,m;
    cin>>n>>m;
    bool res=false;
    for(int i=n+1;i<=m;i++)
    {
        if(isprime(i))
        {
            if(i==m)
            {
                res=true;
                break;
            }
            else
            {
                break;
            }
        }
    }
    if(res)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}
