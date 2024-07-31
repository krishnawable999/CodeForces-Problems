#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string a,b;
        cin>>a>>b;
        if(a == b){
          cout<<a<<" "<<b<<endl;
          
        }
        else{
        char cha,chb;
        cha = a[0];
        chb = b[0];
        // cout<<cha<< " "<<chb<<endl;
        a[0] = chb;
        b[0] = cha;
        cout<<a <<" "<< b<<endl;
        }

    }
    return 0;
}