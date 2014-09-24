#include <iostream>
using namespace std;

int main()
{
	int l,n,w,h;
	cin>>l;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>w; cin>>h;
		if(w>=l && h>=l)
		{
			if(h==w)
			cout<<"ACCEPTED\n";
			else
			cout<<"CROP IT\n";
			
		}
		else
		cout<<"UPLOAD ANOTHER\n";
	}
  return 0;
}

