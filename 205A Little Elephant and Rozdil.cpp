//205A Little Elephant and Rozdil
#include<iostream>
#include<map>
using namespace std;
int main()
{   map<int,int>mp;

    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
       cin>>a[i];
       mp[a[i]]++;
    }
    auto it=mp.begin();
    if(it->second==1)
    {
        int x=it->first;
        for(int i=0;i<n;i++)
        {
            if(a[i]==x)
            {
                cout<<i+1<<endl;
                break;
            }
        }
    }
    else
    {
        cout<<"Still Rozdil"<<endl;
    }
}
