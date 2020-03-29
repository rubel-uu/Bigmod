#include<iostream>
#include<cmath>
using namespace std;
int N=100000,status[100001];
int main()
{
   int i,j,sqrtN;
   for(int i=2;i<=N;i++)
   {
     status[i]==0;
   }
   sqrtN=int(sqrt((double)N));
   for(int i=3;i<=sqrtN;i+=2)
   {
    if(status[i]==0)
    {
      for(j=i*i;j<=N;j+=i)
      {
       status[j]=1;
      }
    }
   }
   cout<<"2 ";
   for(int i=3;i<=N;i+=2)
   {
     if(status[i]==0)
     {
       cout<<i<<" ";
     }
   }
	return 0;
}
