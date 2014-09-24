#include <iostream>
#include<cmath>
using namespace std;


int main()
{
    long t,a,b,m;
    cin>>t;
    long i;
    for(i=0;i<t;i++)
    {
    	cin>>a>>b>>m;
    	b=(b-(b%m));
    	if(b==0)
    	{cout<<0<<endl;continue;}
    //	while(a%m!=0)a++;
    	if(a%m!=0)
    	a=(a+(m-(a%m)));
    	if(a>b)
    	{cout<<0<<endl;continue;}
    	cout<<((b-a)/m)+1<<endl;
    }
    return 0;
}
