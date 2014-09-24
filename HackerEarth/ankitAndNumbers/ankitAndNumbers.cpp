#include <iostream>
#include<cmath>
using namespace std;

int main()
{
    int T,n;
    cin>>T;
    for(int i=0;i<T;i++)
    {
    	long long sum=0;
    	cin>>n;
    	if(n==1)
    	{cout<<1<<endl;continue;}
    	long long tim=pow(n-2,2);
    	tim=tim+n;
    	for(int j=1;j<=n;j++)
    	{
    		sum=sum+(j*tim);
    	}
    	cout<<sum<<endl;
    }
}

