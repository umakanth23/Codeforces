//318A Even Odds
#include<iostream>
using namespace std;
int main()
{
        long long int n,m;
        cin>>n>>m;
        char ch;
        if(n%2==0)
        {   long long int x=n/2;
            if(m<=x)
            {
                long long int res=m*2-1;
                cout<<res<<endl;
            }
            else
            {
                long long int res=m-x;
                res=res*2;
                cout<<res<<endl;

            }

        }
        else
        {
            long long int x=n/2+1;
            if(m<=x)
            {
                long long int res=m*2-1;
                cout<<res<<endl;
            }
            else
            {
                long long int res=(m-x)*2;
                cout<<res<<endl;
            }

        }
    }


