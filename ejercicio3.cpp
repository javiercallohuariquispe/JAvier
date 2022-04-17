#include <stdio.h>
#include <string.h>
#include <iostream>
using namespace std;
int main()
{
    char aa[202],bb[202];
    int a[202],b[202],c[203];
    int i,j,k,ki;
    cout<<"ingrese los numeros a sumar"<<endl;
    cin>>aa;
    cin>>bb;
    int m,n,len;
    m=strlen(aa);
    n=strlen(bb);
    len = ( m > n)? m:n ;

    for ( i=0; i<m; i++)
        a[i]=aa[i]-'0';
    for ( j=0; j<n; j++)
        b[j]=bb[j]-'0';

    for( i=m-1,j=n-1,k=len-1; i>=0 && j>=0; i--,j--,k--)
    {
        c[k] = a[i] + b[j];
    }

    for( ;i>=0; i--,k--)
        c[k] = a[i];
    for( ;j>=0; j--,k--)
        c [k] = b [j];


    for( k=len-1; k>0; k--)
    {
        if( c[k] >9 )
        {
            c[k] = c[k]%10;
            c[k-1] += 1;
        }
    }

    for( k=0; k<len; k++)
        cout<<c[k];
    return 0;
}
