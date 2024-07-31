#include<iostream>
using namespace std;
int func(int a[],int n)
{
    int ans=1;
    for(int i=1; i<n; i++)
    {
        ans*=a[i];
    }
    return ans;
}
int main(){
    int t;
    cout<<"Enter t"<<endl;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int l=a[0],r=func(a,n);
        for(int i=1; i<n-1; i++)
        {
            l*=a[i];
            r/=a[i];
            if(l==r)
            {
                cout<<i<<endl;
                break;
            }
        }
    }
    
}