#include<iostream>
using namespace std;
int main()
{
   long int t,n,c;
while(cin>>n){

     int a[n];
     for(int i=0;i<n;i++)
     {
       cin>>a[i];
     }
     c=0;
     for(int i=0;i<n;i++)
     {
       for(int j=i+1;j<n;j++)
       {
         if(a[i]>a[j])
         {
           int temp=a[i];
           a[i]=a[j];
           a[j]=temp;
            c++;
         }
       }

     }
     cout<<"Minimum exchange operations : "<<c<<endl;
   }
	return 0;
}
