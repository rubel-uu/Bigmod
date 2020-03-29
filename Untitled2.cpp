#include<iostream>
using namespace std;
int main()
{
    long long int t,n,m,a,b;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        a=n-2;
         if(n>m)
         {
             for(int i=0;i<a;i++)
             {
                 cout<<"a";
             }
             cout<<"bb"<<endl;
         }
         else
         {
             cout<<"bb";
             for(int i=0;i<a;i++)
             {
                 cout<<"a";
             }
             cout<<endl;
         }
    }
    return 0;
}
