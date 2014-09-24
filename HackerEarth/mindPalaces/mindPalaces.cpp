#include <iostream>
using namespace std;


int main()
{
    int n,m,i,j,q,num,high,low,mid;
    cin>>n>>m;
    int** a = new int*[n];
    for(int i = 0; i < n; ++i)
    a[i] = new int[m];
    int flag=0;
    for(i=0;i<n;i++)
    for(j=0;j<m;j++)
    cin>>a[i][j];
    cin>>q;
   
    for(int k=0;k<q;k++)
    {
    	 high=m; low=0;
        cin>>num;
        flag=0;
      for(i=0;i<n;i++)
      {
      		high=m-1; low=0; mid=(high+low)/2;
      		while(low<=high && a[i][mid]!=num)
      		{
      		
      			if(num<a[i][mid])
      			high=mid-1;
      			else
      			low=mid+1;
      			mid=(high+low)/2;
      		}
      		if(num==a[i][mid])
      		{cout<<i<<" "<<mid<<endl;flag=1;break;}
      		
      }
      	if(flag==0)
      	cout<<"-1 -1"<<endl;
      	
      
    }
        
    }

