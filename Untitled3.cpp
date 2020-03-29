#include<iostream>
#define M 1000005
using namespace std;
int prime[M]={0};/// all are prime
int sieve()
{
    prime[0]=prime[1]=1;
    for(int i=4;i<=M;i+=2)
    {
        prime[i]=1;/// not prime
    }
    for(int i=3;i*i<=M;i+=2)
    {
        if(prime[i]==0)
        {
            for(int j=i*i;j<=M;j+=i)
            {
                prime[i]=1; /// not prime
            }
        }
    }

}
int main()
{
    sieve();
  int n;
  cin>>n;
  for(int i=0;i<n;i++)
  {
      int k;
      cin>>k;

        if(prime[k]==0)
          {
              cout<<"Prime";
          }
          else
          {
              cout<<"Not prime";
          }
  }

    return 0;
}
