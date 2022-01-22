#include<iostream>
#include<set>
using namespace std;
int main()
{   set<int>s;
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];

    }
    int cnt=0;
    s.insert(a[0]);
       for(int i=1;i<n;i++)
       {
        auto temp=s.find(a[i]);
        if(temp==s.end())
        {


            s.insert(a[i]);

            int val=distance(s.lower_bound(a[i]),s.end());
            int x=s.size();
            if(val==1||val==x)
            {
                cnt++;
            }
        }

       }
       cout<<cnt<<endl;


}
//comment: accepted successfully
