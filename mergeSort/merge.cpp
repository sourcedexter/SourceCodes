#include<iostream>
using namespace std;

int merge(int a[],int b[],int c[], int len1, int len2)
{
int i=0,j=0,k=0;
while(i<len1 && j<len2)
{
if(b[i]<=c[j])
{a[k]=b[i];k++;i++;}
else
{a[k]=c[j];k++;j++;}
}
while(i<len1)
{
a[k]=b[i];
i++;k++;
}

while(j<len2)
{
a[k]=c[j];
j++;k++;
}
}

int mergesort(int a[],int len)
{
  int m=(len)/2;
  int u=len-m;
   int b[m],c[u];
  
  for(int i=0;i<m;i++)
  b[i]=a[i];
  
  for(int i=0;i<u;i++)
  c[i]=a[m+i];

  if(len >1)
  {
   mergesort(b,m);
   mergesort(c,u);
   merge(a,b,c,m,u);
  }
}


int main()
{
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++)
cin>>a[i];
mergesort(a,n);
for(int i=0;i<n;i++)
cout<<" "<<a[i];
cout<<endl;
}


