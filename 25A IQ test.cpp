//25A IQ test;
#include<iostream>
using namespace std;
int main()
{
    int n;
    //hi this is umakanth
    cin>>n;
    int a[n];
    int ev=0,od=0;
    int last_even,last_odd;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            ev++;
            last_even=i+1;
        }
        else
        {
            od++;
            last_odd=i+1;
        }
    }
    int res=ev-od>0?last_odd:last_even;
    cout<<res<<endl;
}
//comment : accepted 31-05-2021
