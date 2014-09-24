#include <iostream>
#include<math.h>
using namespace std;
int main()
{
    int isprime,i,j;
    long  a[501],arr[501];
 for(i=2;i<=500;i++)
 a[i]=1;
 a[0]=a[1]=0;
    for(i=2;i*i<=501;i++)
    {
        if(a[i])
        for(j=i+i;j<=501;j=j+i)
        a[j]=0;
    }
  /*  for(i=0;i<=501;i++)
    cout<<a[i]<<" ";*/
    long sum,count=0;
    for(i=1;i<=501;i++)
    {

        if(a[i])count++;
        arr[i]=pow(2,count-1);
    }
    arr[0]=0;
    arr[1]=0;
    for(i=1;i<=501;i++)
    arr[i]=arr[i]+arr[i-1];
   /* for(i=0;i<=501;i++)
    cout<<arr[i]<<" ";*/
  int num1;
  cin>>num1;
  cout<<arr[num1];
   return 0;
}


