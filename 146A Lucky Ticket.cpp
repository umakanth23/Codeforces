//146A Lucky Ticket
#include<iostream>
#include<string>
using namespace std;
int main()
{
    int n;
    cin>>n;
    char s[n+1];
    cin>>s;
    int lsum=0,rsum=0;
    for(int i=0;i<n/2;i++)
    {
        if(s[i]=='4'||s[i]=='7')
        {
            lsum=lsum+(s[i]-'0');
        }
        else
        {
            cout<<"NO"<<endl;
            return 0;
        }
    }
    for(int i=n/2;i<n;i++)
    {
        if(s[i]=='4'||s[i]=='7')
        {
            rsum=rsum+(s[i]-'0');
        }
        else
        {
            cout<<"NO"<<endl;
            return 0;
        }
    }
    if(rsum==lsum)
    {
        cout<<"YES"<<endl;
        //cout<<lsum<<" "<<rsum<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}
