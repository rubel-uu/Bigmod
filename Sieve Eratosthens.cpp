#include<iostream>
#include<cmath>
#define M 1000000
bool marked[M];
using namespace std;

bool isprime(int n)
{
    if(n<2) return  false;
    if(n==2) return true;
    if(n%2==0) return false;
    return marked[n]==false;
}
void sieve(int n)
{
    int k=sqrt(n);
    for(int i=3;i<=k;i++)
    {
        if(marked[i]==false)///i is prime
        {
            for(int j=i*i;j<=n;j+=i)
            {
                marked[j]==true;
            }
        }
    }
}
int main()
{
    int z;
    cin>>z;
    cout<<"2 ";
    for(int i=3;i<=z;i+=2)
    {
        if(marked[i]==false)
        {
            cout<<i<<" ";
        }
    }
    return 0;
}
