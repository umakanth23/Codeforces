//158B Taxi
#include<iostream>
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
    int cnt=1;
    int sum=a[0];
    for(int i=1;i<n;i++)
    {
        if((sum+a[i])<=4)
        {
            continue;
        }
        else
        {
            cnt++;
            sum=sum+a[i];
            if(sum%4==0)
            {
                cnt++;
            }
            else
            {
                cnt=cnt+2;
            }
        }
    }
    cout<<cnt<<endl;
}
