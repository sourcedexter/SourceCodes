#include<iostream>
#include<cmath>
using namespace std;

class dft
{
int x[20],k,n,l;
float sre,sim;
 public:
 void getdata();
 void calculate();
 };
  void dft:: getdata()
  {
  cout<<"enter the no. of elements: ";
  cin>>l;
  cout<<"\n enter the elements\n";
  for(int i=0;i<l;i++)
  cin>>x[l];
  }
void dft::calculate()
{
for(k=0;k<l;k++)
{
for(n=0;n<l;n++)
{
sre=sre+x[n]*cos(2*3.141*n*k/4);
sim=sim+x[n]*sin(2*3.141*n*k/4);
}
cout<<"re="<<sre<<"\t"<<"im="<<sim<<"\n";
sre=0;
sim=0;
}
}

int main()
{

    dft obj;
    obj.getdata();
    obj.calculate();
    return 0;
}
