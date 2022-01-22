//32B Borze
#include<iostream>
using namespace std;
void borze(string s)
{
    if(s.length()==0)
    {
        return ;
    }
    if(s[0]=='.')
    {
        cout<<0;
        borze(s.substr(1));
    }
    else
    {
        if(s[0]=='-'&&s[1]=='.')
        {
            cout<<1;
            borze(s.substr(2));
        }
        else
        {
            cout<<2;
            borze(s.substr(2));
        }
    }
}
int main()
{
    string s;
    cin>>s;
    //int n=s.length();
    borze(s);
    return 0;
}
