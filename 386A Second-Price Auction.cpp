//386A Second-Price Auction
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int val=a[0];
    int in=0;
    for(int i=1;i<n;i++)
    {
        int x=a[i];
        if(x>=val)
        {
            val=x;
            in=i;
        }
    }
    sort(a,a+n);
    int res=a[n-2];
    cout<<in+1<<" "<<res<<endl;
}
