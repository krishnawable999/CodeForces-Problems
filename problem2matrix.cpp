#include<iostream>
using namespace std;
int main(){
   long long  int t;
    cin>>t;
    while(t--){
        int i,j;
        int a[2][2];
        for(i=0;i<2;i++){
            for(j=0;j<2;j++){
                cin>>a[i][j];
            }
        }
        int flag=0;
         for(i=0;i<2;i++){
            for(j=0;j<2;j++){
                if(a[0][0] < a[0][1] && a[1][0] < a [1][1]){
                    flag=1;
                }
                else {
                flag=0; }
            }
        }
        if(flag==1){
        cout<<"YES"<<endl;}
        else{
        cout<<"NO"<<endl;}
    }
}