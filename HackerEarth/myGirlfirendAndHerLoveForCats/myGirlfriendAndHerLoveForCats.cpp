#include <iostream>
using namespace std;


void merge(long long arr[], long long l, long long m, long long r)
{
    long long i, j, k;
    long long n1 = m - l + 1;
    long long n2 =  r - m;
    long long L[n1], R[n2];
 
    for(i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for(j = 0; j < n2; j++)
        R[j] = arr[m + 1+ j];
 
    i = 0;
    j = 0;
    k = l;
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
 
    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}
 
void mergesort(long long arr[], long long l, long long r)
{
    if (l < r)
    {
        long long m = l+(r-l)/2; 
        mergesort(arr, l, m);
        mergesort(arr, m+1, r);
        merge(arr, l, m, r);
    }
}
int main()
{
    long long n;
    
    cin>>n;
    long long *a=new long long[n];
    long long *b=new long long[n];
    for(long long i=0;i<n;i++)
    scanf("%lld",&a[i]);
    for(long long i=0;i<n;i++)
    scanf("%lld",&b[i]);
    
    mergesort(a,0,n-1);
    mergesort(b,0,n-1);
    
    long long sum=0;
    for(long long i=0;i<n;i++)
    sum=sum+(a[i]*b[i]);
    cout<<sum<<endl;
    return 0;
}

