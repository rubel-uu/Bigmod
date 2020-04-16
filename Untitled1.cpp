#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    char k,ll,m;
    int l=s.size(),c=0;
    for(int i=0;i<l;i++)
    {
         c++;
        if(s[i]=='.')
        {

             k=s[i-1];
             ll=s[i+1];
             break;
        }
    }
    ///cout<<k<<endl;
    ///cout<<ll<<endl;
    ///cout<<c<<endl;


    if(k<'9'&&ll<'5')
    {
        for(int i=0;i<c-1;i++)
        {
            cout<<s[i];
        }
       /// cout<<"hi"<<endl;
    }
    else if(k<'9'&&ll>='5')
    {
        k=k-'0'+1;
        k=k+'0';

        for(int i=0;i<c-2;i++)
        {
            cout<<s[i];
        }
         cout<<k<<endl;
    }
   else if(k=='9')
    {
        cout<<"GOTO Vasilisa."<<endl;
    }
    return 0;
}
