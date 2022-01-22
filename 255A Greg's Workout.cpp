//255A Greg's Workout
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
    int ch=0,bi=0,bc=0;
    for(int i=0;i<n;i++)
    {
        if(i%3==0)
        {
            ch=ch+a[i];
        }
        else
        {
            if(i%3==1)
            {
                bi=bi+a[i];
            }
            else
            {
                if(i%3==2)
                {
                    bc=bc+a[i];
                }
            }
        }
    }
    int res=max(ch,max(bi,bc));
    if(res==ch)
    {
        cout<<"chest"<<endl;
    }
    else
    {
        if(res==bi)
        {
            cout<<"biceps"<<endl;
        }
        else
        {
            if(res==bc)
            {
                cout<<"back"<<endl;
            }
        }
    }
}
