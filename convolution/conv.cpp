#include<iostream>
using namespace std;

class conv
{
public:
 int len1,len2,len3;
 int x[20],h[20],y[20];
 void getdata();
  void convolution();
  void display();
};
void conv:: getdata()
{
    int i;
    std::cout<< "Enter number of X terms \n";
    std::cin>>len1;
    std::cout<< "Enter number of Y terms \n";
    std::cin>>len2;
    len3=len1+len2-1;
    std::cout<< "Enter X terms \n";
    for(i=0; i<len3; i++)
        cin>>x[i];

    std::cout<< "Enter Y terms \n";
    for(i=0; i<len3; i++)
        std::cin>>h[i];
}


void conv:: convolution()
{
int i,j;
for(i=0;i<len3;i++)
{
y[i]=0;
for(j=0;j<=i;j++)
{
y[i]+=x[i]*h[i-j];
}
}
}

void conv:: display()
{
int i;
for(i=0;i<len3;i++)
cout<<y[i]<<"\n";
}

int main()
{
conv obj;
obj.getdata();
obj.convolution();
obj.display();
return 0;
}
