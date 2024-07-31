#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int sum=0;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        bool flag=false;
        for(int i=0;i<n;i++){
            sum+=a[i];
            if(a[i]==a[i+1]){
                flag= false;
                break;
            }
            if(sum == a[i]){
                flag=true;
                break;
            }
        }
        if(flag == true){
            cout<<"YES"<<endl;
            for(int i=0;i<n;i++){
            cout<<a[i]<<" ";
        }
        }
        else{
            cout<<"NO"<<endl;
        }

    }
}