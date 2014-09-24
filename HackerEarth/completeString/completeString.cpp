#include <iostream>
#include<string.h>
using namespace std;

int main()
{
    char s[100];
    int T;
    cin>>T;
    for(int i=0;i<T;i++)
    {
    	cin>>s;
    	int *a=new int[26];
    	for(int j=0;j<strlen(s);j++ )
    	{
                
    		if(!a[s[j]-'a'])
    		a[s[j]-'a']=1;
    	}
    	int sum=0;
    	for(int j=0;j<26;j++)
    	 sum=sum+a[j];
    	if(sum==26)
    	cout<<"YES"<<endl;
    	else 
    	cout<<"NO"<<endl;
    }
    return 0;
}


