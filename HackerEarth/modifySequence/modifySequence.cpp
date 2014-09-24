#include <iostream>
using namespace std;

int main()
{
	int n;
	long *a=new long[n];
    cin>>n;
    for(int i=0;i<n;i++)
    cin>>a[i];
    int i,flg2=0;
    while(1)
    {
    	for(i=0;i<n-1;i++)
    	{
    		if(a[i]==0 || a[i]<0){flg2=1;break;}
    		else
    		{
    		a[i]-=1;
    		a[i+1]-=1;
    		}
    	}
    	if(flg2) break;
    }
    for(i=0;i<n;i++)
    	{
    		if(a[i]!=0)
    		{cout<<"NO"; return 0;}
    	}
    	cout<<"YES";
    	return 0;
}
  
  
  

