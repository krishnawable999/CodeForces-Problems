#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        int b[n/2];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<n;i++)
        {
            int k=0;
           b[i]=a[i+k] + a[i+1+k];
           k++;
        }
        for(int i=0;i<(n/2+1);i++)
        {
            cout<<b[i]<<" ";
        }
    }
}