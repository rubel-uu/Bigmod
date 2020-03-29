#include<iostream>
using namespace std;
long bigmod(long b,long p,long m)
{
	if(p==0) return 1;
	else if(p%2==0)
	{
        long int l,k;
        l=bigmod(b,p/2,m);
        k=l*l;
        return (k%m);
	}
	else
	{
	   return ((b%m)*bigmod(b,p-1,m))%m;
	}
}
int main()
{
	long a,b,c;
	while(cin>>a>>b>>c)
	{
	    cout<<bigmod(a,b,c)<<endl;
	}
}
