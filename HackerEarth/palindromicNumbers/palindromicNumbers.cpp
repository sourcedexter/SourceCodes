#include <iostream>
using namespace std;
int check(long g)
{
	long sum,temp;
	temp=g;
	while(temp!=0)
	{
		sum=(sum*10)+(temp%10);
		temp=temp/10;
	}
	if(sum==g)
	return 1;
	else return 0;
}

int main()
{
    int t;
    long a,b;
    cin>>t;
    while(t--)
    {
     int count=0;
     cin>>a>>b;
     for(long h=a;h<=b;h++)
     if(check(h))
     count++;
     cout<<count<<endl;
    }
    return 0;
}

