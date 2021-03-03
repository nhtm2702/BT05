#include <iostream>
#include <cmath>
using namespace std;
int toHop(int a,int b)
{
    int ngt=1,kgt=1,nkgt=1;
    for (int i=2;i<=b;i++) ngt*=i;
    for (int i=2;i<=a;i++) kgt*=i;
    for (int i=2;i<=(b-a);i++) nkgt*=i;
    return (ngt/(kgt*nkgt));
}
int KT(int a,int b)
{
    if ((a>=0) && (a<=b) && (b>=1) && (b<=20)) return 1;
    else return 0;
}
void nhapKN(int *k,int *n,int &i)
{
    do
    {
        i++;
        cin >> k[i] >> n[i];
    }
    while ((k[i]!=-1) && (n[i]!=-1));
}
int main()
{
    int i=0;
    int *k= new int [i];
    int *n= new int [i];
    nhapKN(k,n,i);
    for (int j=1;j<i;j++)
    {
        if (KT(k[j],n[j])==1) cout << toHop(k[j],n[j]) << endl;
    }
    return 0;
}
