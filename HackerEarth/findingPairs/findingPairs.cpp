#include <iostream>
using namespace std;

int main()
{
    long long t,count,temp;
    long long i,j;
    long long n;
    cin>>t;
    for(long long a=0;a<t;a++)
    {
    	scanf("%lld",&n);
    	count=0;
    	long long *ar=new long long[n];
    	for(int x=0;x<n;x++)
    	scanf("%lld",&ar[x]);
    /*	for(j=1;j<n;j++)
    	for(i=0;i<j;i++)*/
    	for(long long k=0;k<n*n;k++ )
    	{
    		i=k/n;
    		j=k%n;
    		if(i<j) continue;
    		if(ar[j]==ar[i])
    		{count++;}
    	}
    	cout<<count<<endl;
    }
    return 0;
    
}


    

