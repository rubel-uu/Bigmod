#include<stdio.h>
int main()
{
   int a[100]; /// total amra 100 ta value rakhte parbo
     int n;
     scanf("%d",&n); /// kotogula value ami input nibo
       for(int i=0;i<n;i++)
       {
         scanf("%d",&a[i]);
       }
       for(int i=0;i<n-1;i++)
       {
         for(int j=0;j<n-i-1;j++)
         {
           if(a[j]>a[j+1])
           {
             int temp=a[j];
             a[j]=a[j+1];
             a[j+1]=temp;
           }
         }
       }
       int key,mid,left=0,right=n-1;
       scanf("%d",&key);
       while(left<=right)
       {
          mid=(left+right)/2;
          if(a[mid]==key)
          {
            printf("Key value is present in the array at this position %d",mid);
            break;

          }
          else if(key>mid)
          {
            left=mid+1;
          }

          else
          {
            right=mid-1;
          }
       }
       if(left>right)
       {
         printf("Key value is not present here");
       }
	return 0;
}
