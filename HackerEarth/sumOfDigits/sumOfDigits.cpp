#include<iostream>
using namespace std;

int main()
{
	long a,b,i,small,temp;
	int s,sum,flag=1,count,rem;
	cin>>a>>b>>s;
	for(i=a;i<=b;i++)
	{
		temp=i;
		sum=0;
		//rem=0;
		while(temp!=0)
		{  
			if(sum>s)break;
			sum=sum+(temp%10);
			temp=temp/10;
		}
		if(sum==s && flag)
		{small=i;flag=0;count++;continue;}
		if(sum==s)
		count++;
	}
	cout<<count<<endl;
	cout<<small<<endl;
	return 0;
}

