#include <iostream>
#include <cstring>
using namespace std;
char text[100001],pattern[100001];
int main()
{
    char *find=NULL;
    int t;
    cin>>t;
    for(int k=0;k<t;k++)
    {
    	cin>>text>>pattern;
    //	cout<<strlen(pattern)<<endl;
    //	cout<<strlen(text)<<endl<<strlen(pattern)<<endl;
    	if(strlen(pattern)>strlen(text))
    	{cout<<"NO\n";continue;}
    	find=strstr(text,pattern);
    	if(find==NULL)
    		cout<<"NO\n";
    	else
    		cout<<"YES\n";
    }
    return 0;
}
